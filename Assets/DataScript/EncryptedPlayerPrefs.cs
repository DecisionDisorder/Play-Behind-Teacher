using UnityEngine;
using System.Collections;
using System.Security.Cryptography;
using System.Text;
 
/// <summary>
/// ��ȣȭ�Ͽ� PlayerPrefs�� �����ϴ� �ý��� Ŭ����
/// </summary>
public class EncryptedPlayerPrefs  {
 
    // Encrypted PlayerPrefs
    // Written by Sven Magnus
    // MD5 code by Matthew Wegner (from [url]http://www.unifycommunity.com/wiki/index.php?title=MD5[/url])
    
    
    // Modify this key in this file :
    private static string privateKey="*@#KLSD9cm@#kc&3jfNB";
    
    // Add some values to this array before using EncryptedPlayerPrefs
    public static string[] keys;
    
    /// <summary>
    /// ������ ��ȣȭ �۾�
    /// </summary>
    /// <param name="strToEncrypt">��ȣȭ�� ���ڿ�</param>
    /// <returns>��ȣȸ�� ���ڿ�</returns>
    public static string Md5(string strToEncrypt) {
        UTF8Encoding ue = new UTF8Encoding();
        byte[] bytes = ue.GetBytes(strToEncrypt);
 
        MD5CryptoServiceProvider md5 = new MD5CryptoServiceProvider();
        byte[] hashBytes = md5.ComputeHash(bytes);
 
        string hashString = "";
 
        for (int i = 0; i < hashBytes.Length; i++) {
            hashString += System.Convert.ToString(hashBytes[i], 16).PadLeft(2, '0');
        }
 
        return hashString.PadLeft(32, '0');
    }
    
    /// <summary>
    /// ��ȣȭ�Ͽ� ����
    /// </summary>
    /// <param name="key">������ �̸�</param>
    /// <param name="type">���� Ÿ��</param>
    /// <param name="value">������ ��</param>
    public static void SaveEncryption(string key, string type, string value) {
        int keyIndex = (int)Mathf.Floor(Random.value * keys.Length);
        string secretKey = keys[keyIndex];
        string check = Md5(type + "_" + privateKey + "_" + secretKey + "_" + value);
        PlayerPrefs.SetString(key + "_encryption_check", check);
        PlayerPrefs.SetInt(key + "_used_key", keyIndex);
    }
    
    /// <summary>
    /// ��ȣ Ű ��ȿ�� Ȯ��
    /// </summary>
    /// <param name="key">������ �̸�</param>
    /// <param name="type">���� �̸�</param>
    /// <param name="value">������ ��</param>
    /// <returns></returns>
    public static bool CheckEncryption(string key, string type, string value) {
        int keyIndex = PlayerPrefs.GetInt(key + "_used_key");
        string secretKey = keys[keyIndex];
        string check = Md5(type + "_" + privateKey + "_" + secretKey + "_" + value);
        if(!PlayerPrefs.HasKey(key + "_encryption_check")) return false;
        string storedCheck = PlayerPrefs.GetString(key + "_encryption_check");
        return storedCheck == check;
    }
    
    /// <summary>
    /// Int ������ ����
    /// </summary>
    /// <param name="key">������ �̸�</param>
    /// <param name="value">������ ��</param>
    public static void SetInt(string key, int value) {
        PlayerPrefs.SetInt(key, value);
        SaveEncryption(key, "int", value.ToString());
    }

    /// <summary>
    /// Float ������ ����
    /// </summary>
    /// <param name="key">������ �̸�</param>
    /// <param name="value">������ ��</param>
    public static void SetFloat(string key, float value) {
        PlayerPrefs.SetFloat(key, value);
        SaveEncryption(key, "float", Mathf.Floor(value*1000).ToString());
    }

    /// <summary>
    /// String ������ ����
    /// </summary>
    /// <param name="key">������ �̸�</param>
    public static void SetString(string key, string value) {
        PlayerPrefs.SetString(key, value);
        SaveEncryption(key, "string", value);
    }

    /// <summary>
    /// Int ������ �ҷ�����
    /// </summary>
    /// <param name="key">������ �̸�</param>
    public static int GetInt(string key) {
        return GetInt(key, 0);
    }

    /// <summary>
    /// Float ������ �ҷ�����
    /// </summary>
    /// <param name="key">������ �̸�</param>
    public static float GetFloat(string key) {
        return GetFloat(key, 0f);
    }

    /// <summary>
    /// String ������ �ҷ�����
    /// </summary>
    /// <param name="key">������ �̸�</param>
    public static string GetString(string key) {
        return GetString(key, "");
    }

    /// <summary>
    /// Int ������ �ҷ�����
    /// </summary>
    /// <param name="key">������ �̸�</param>
    /// <param name="defaultValue">�ҷ��� ���� ���� ���� default ��</param>
    public static int GetInt(string key,int defaultValue) {
        int value = PlayerPrefs.GetInt(key);
        if(!CheckEncryption(key, "int", value.ToString())) return defaultValue;
        return value;
    }

    /// <summary>
    /// Float ������ �ҷ�����
    /// </summary>
    /// <param name="key">������ �̸�</param>
    /// <param name="defaultValue">�ҷ��� ���� ���� ���� default ��</param>
    public static float GetFloat(string key, float defaultValue) {
        float value = PlayerPrefs.GetFloat(key);
        if(!CheckEncryption(key, "float", Mathf.Floor(value*1000).ToString())) return defaultValue;
        return value;
    }

    /// <summary>
    /// String ������ �ҷ�����
    /// </summary>
    /// <param name="key">������ �̸�</param>
    /// <param name="defaultValue">�ҷ��� ���� ���� ���� default ��</param>
    public static string GetString(string key, string defaultValue) {
        string value = PlayerPrefs.GetString(key);
        if(!CheckEncryption(key, "string", value)) return defaultValue;
        return value;
    }
    
    /// <summary>
    /// ������ ����
    /// </summary>
    /// <param name="key">������ ������ �̸�</param>
    public static void DeleteKey(string key) {
        PlayerPrefs.DeleteKey(key);
        PlayerPrefs.DeleteKey(key + "_encryption_check");
        PlayerPrefs.DeleteKey(key + "_used_key");
    }
    
}
