using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class InGameMgr : MonoBehaviour {

    public bool IsPlayingGame = true;
    public static int GameMode;
    public bool isPause = false;
    public GameObject Pause_Menu;
    public GameObject TutorialWarningMessage_Menu;

    public GameObject BfStartGame;

    //public GameObject BetaFeedback_Menu;
    //public bool isFirstBeta = true;

    public ulong[] PlayTime = new ulong[2] { 0, 0 };
    public int[] numOfPlay = new int[2] { 0, 0 };
    public int numOfFinish;
    public bool didReviewed = false;
    public GameObject Review_Menu;

    public DataManager dataManager;
    public TutorialMgr tutorialMgr;
    /*
    private void Start()
    {
        if(SceneManager.GetActiveScene().buildIndex.Equals(0))
        {
            if (isFirstBeta)
            {
                BetaFeedback_Menu.SetActive(true);
            }
        }
    }*/
    private void Update()
    {
        if (!SceneManager.GetActiveScene().name.Equals("MainScene"))
        {
            if (Input.GetKeyDown(KeyCode.Escape))
            {
                if (!isPause)
                {
                    PauseGame();
                }
                else
                {
                    ResumeGame();
                }
            }
        }  
    }
    public void Button_PauseMenu(int nKey)
    {
        switch(nKey)
        {
            case 0://Back to Menu
                ResumeGame();
                SceneManager.LoadScene("MainScene");
                break;
            case 1://Resume
                ResumeGame();
                break;
            case 2://Tutorial
                TutorialWarningMessage_Menu.SetActive(true);
                break;
        }
    }
    void ResumeGame()
    {
        Time.timeScale = 1.0f;
        isPause = false;
        dataManager.SaveData();
        Pause_Menu.SetActive(isPause);
    }
    void PauseGame()
    {
        isPause = true;
        Time.timeScale = 0.0f;
        Pause_Menu.SetActive(isPause);
    }
    public void SelectTutorial(int nKey)
    {
        switch(nKey)
        {
            case 0://YES
                ResumeGame();
                tutorialMgr.didTutorialComplete[SceneManager.GetActiveScene().buildIndex] = false;
                dataManager.SaveData();
                SceneManager.LoadScene(SceneManager.GetActiveScene().name);
                break;
            case 1://No
                TutorialWarningMessage_Menu.SetActive(false);
                break;
        }
    }

    public void SceneChange()
    {
        if(GameMode.Equals(0))
        {
            GameMode = 1;
            SceneManager.LoadScene("KatalkScene");
        }
        else
        {
            GameMode = 0;
            SceneManager.LoadScene("TVGame_Scene");
        }
    }
    public void CloseMenu(Animation menuAni, GameObject menu)
    {
        menuAni.CrossFade("CloseMenu");

        StartCoroutine(WaitClosemenu(menuAni, menu));
    }
    IEnumerator WaitClosemenu(Animation menuAni, GameObject menu)
    {
        while (menuAni.isPlaying)
        {
            yield return new WaitForEndOfFrame();
        }
        
        menu.SetActive(false);
    }

    public void CheckReview()
    {
        if ((numOfFinish % 8).Equals(0))
        {
            if (!didReviewed)
            {
                Review_Menu.SetActive(true);
            }
        }
    }

    public void ReviewRequest(int key)
    {
        switch(key)
        {
            case 0://Open Review
                didReviewed = true;
                Application.OpenURL("https://play.google.com/store/apps/details?id=com.decisiondisorder.behindteacher");
                Review_Menu.SetActive(false);
                break;
            case 1:
                Review_Menu.SetActive(false);
                break;
        }
    }
    /*
    public void BetaFeedback(int key)
    {
        switch(key)
        {
            case 0://OpenBetaMenu
                BetaFeedback_Menu.SetActive(true);
                break;
            case 1://CloseBetaMenu
                BetaFeedback_Menu.SetActive(false);
                isFirstBeta = false;
                break;
            case 2://OpenFormURL
                Application.OpenURL("https://goo.gl/forms/unuUJeyJi82thyS03");
                break;
        }
    }*/
}
