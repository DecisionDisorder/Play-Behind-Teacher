#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Func`2<System.Boolean,System.String>
struct Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
// FloatingObjects[]
struct FloatingObjectsU5BU5D_tE08D869DDDBDF1528A77C479584B92124EBBE63D;
// FloatingTexts[]
struct FloatingTextsU5BU5D_tBBBD0A67FE3697C78F2FE6377035FECC46EB0A9D;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Menus[]
struct MenusU5BU5D_tA1EBAC3E01FD1A56076664BBB746C907ADFCAE10;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// Stat[]
struct StatU5BU5D_t53A480EE91EA338274DD85B6C7F83DC38FCA4573;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// System.UInt64[]
struct UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// AchievementMgr
struct AchievementMgr_tBBA74F2FEEB64270659732DB117AC9F39379F713;
// AdManager
struct AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.Animation
struct Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8;
// UnityEngine.AnimationState
struct AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// BackUpDataMgr
struct BackUpDataMgr_t6E9ADBA6198051028255BA61E8E2909CF205DF13;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1;
// GooglePlayGames.BasicApi.Video.CaptureOverlayStateListener
struct CaptureOverlayStateListener_t9DE6C20BD115A79BA44E615E7255F06DB9E59E0F;
// CoinMgr
struct CoinMgr_tD1020715095479E870A6900CD7EB3FEB6799CF50;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// DailyGiftMgr
struct DailyGiftMgr_t908CDDC51C2FFF6591A567DEA9FF28E616634579;
// DataManager
struct DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2;
// DifficultyData
struct DifficultyData_tB1A89BA060411BADB493F4CAA1D05880D1F2C4F2;
// EventMgr
struct EventMgr_t9E557401B0F8153C25194DEB95AB52C9EAB864D7;
// FPSDisplay
struct FPSDisplay_tB99493D73C9C04D0BE47319995B5EBF3A63E49E4;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GPGSMng
struct GPGSMng_t3617E7177E6FF6253F7B01F8F79964211DCE171D;
// GageMove
struct GageMove_t12372F686CA9F6984B88FD2B0CE2704AA1CC9969;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// GooglePlayGames.BasicApi.Nearby.IDiscoveryListener
struct IDiscoveryListener_tE23B875A4F3EF6310BDF51338EDC8C0EEB84B9C4;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// GooglePlayGames.BasicApi.Nearby.IMessageListener
struct IMessageListener_tC2C50F206BC9FAC318DCDDBEFE35A2158AA2DD6D;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// InGameMgr
struct InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58;
// ItemMgr
struct ItemMgr_t7E210A71B7FC2B9D76B7FD54A59ACE50E5A33D85;
// KatalkGameMgr
struct KatalkGameMgr_tFC6829AF28819804C713254F0B5B96BBE4147776;
// LeaderboardMgr
struct LeaderboardMgr_t06FB7DCB727FC61741D924E64778B02D72724305;
// LevelMgr
struct LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503;
// MainSceneMgr
struct MainSceneMgr_t343ABFBEB84190D4CB9232C310D5ADD6CC0E5117;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// Option
struct Option_t4668F0CFD50CE7253A226099157E10033328C0E7;
// PhoneConMgr
struct PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6;
// PhoneStore
struct PhoneStore_t4EC34CE63F3C9E033AC2DFE9F2E67ABC19BAE4B4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// SliderColorMgr
struct SliderColorMgr_t8690AB1B9F806F42AD0A9B9101BC259802451428;
// SnackGameMgr
struct SnackGameMgr_t753894511F69E7A4EB2E5AA5EAFFED1B63684081;
// SnackStore
struct SnackStore_t05E20AE1F6DEDEFC544C19F0DBB6C2724CFB6714;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// Stat
struct Stat_t7D7F6CA2A979BAC8379B551A124960110A6C4426;
// System.String
struct String_t;
// SuggestWords
struct SuggestWords_t98447E746D542CFBC29E31430CB5B96B92FEE357;
// TVButtonMgr
struct TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C;
// TVGameDifficulty
struct TVGameDifficulty_t1FF3D702593DD185CFB68A41A4DAA7616F14137B;
// TeacherMgr
struct TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// TicketMgr
struct TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// TutorialMgr
struct TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD;
// TvGameMgr
struct TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityAdsMgr
struct UnityAdsMgr_t33D8DE69F0F8B22831767D5376841535472C3BC0;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40;
// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener
struct OnGameThreadDiscoveryListener_tA8F52AF6E109E1D8FC2E09248EAD887F5BAEE461;
// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener
struct OnGameThreadMessageListener_tC0036576C495E967400B0EA79D9A87E5B8F44AE1;
// GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy
struct OnCaptureOverlayStateListenerProxy_tD7A939B0C9AE046FAAAB7093F51DB81FF91AF5D7;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;
// TicketMgr/<WaitOpenRTEnd>d__35
struct U3CWaitOpenRTEndU3Ed__35_t09256C88893E983105BE0ECEE7541E8C34781AB2;
// TicketMgr/<WaitRandomItemAni>d__34
struct U3CWaitRandomItemAniU3Ed__34_t1EC3118B981CF50990B4B7A9CE62F24B5E4005D0;
// TutorialMgr/<WaitAfterContinue>d__51
struct U3CWaitAfterContinueU3Ed__51_t4AE026D29B7CB32199323462CA02BE95DA070C19;
// TutorialMgr/<WaitColorChange>d__24
struct U3CWaitColorChangeU3Ed__24_t671C1DA756B52989A8A8913A50638F87E198AB86;
// TutorialMgr/<WaitLightOff>d__25
struct U3CWaitLightOffU3Ed__25_tA22B97B64769E96CBAA2C74B0ACAF239828B6E41;
// TutorialMgr/<WaitResetTime>d__53
struct U3CWaitResetTimeU3Ed__53_t06086594BB5116DE3F360600D32CAAE4606A1A48;
// TutorialMgr/<WaitforPhoneOn>d__37
struct U3CWaitforPhoneOnU3Ed__37_tA5EF9FE510FB20FAF29F56F16AEE168E8444AAF9;
// TvGameMgr/<CloseMissionImg>d__55
struct U3CCloseMissionImgU3Ed__55_t3E8B05F0EFE76FF712BFF586E10AD7FEA9E1EFDC;
// TvGameMgr/<DecreaseEndurance>d__50
struct U3CDecreaseEnduranceU3Ed__50_t6EEF1D2655D9B83253EE4A2A73DE10969C6F3C0F;
// TvGameMgr/<PlusScore>d__47
struct U3CPlusScoreU3Ed__47_t27B0AE547D0422F352AE54E116E71B0A1FEC0F10;
// TvGameMgr/<WaitMission>d__56
struct U3CWaitMissionU3Ed__56_t59EDCCAD3964067859AC54E89ED67F0CEA7E143C;
// UnityAdsMgr/<ShowAdWhenReady>d__8
struct U3CShowAdWhenReadyU3Ed__8_tF8CAB47B2E1089E8266B722F3D42BC37BC3EA532;
// GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c
struct U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6;
// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t3AB64EA834826C490341842E1F025B45BE316BB7;
// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tDBD1EA268703AB432125788330B6A6173A98CCFC;
// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tA8CAA40AF7E63A15CBEBE280B1337FE9ADE6CAD5;
// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tFB0C2E6D2ED758CA8CDBC373282072749C1FA9DB;
// GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t7AC9953B2421A79B7821986D0B9D970A5996C8A4;

IL2CPP_EXTERN_C RuntimeClass* Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BackkeyMgr_t3215C98AD2E7EFE9AA62C0171B32DEEFB4239C45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CaptureOverlayStateListener_t9DE6C20BD115A79BA44E615E7255F06DB9E59E0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDiscoveryListener_tE23B875A4F3EF6310BDF51338EDC8C0EEB84B9C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMessageListener_tC2C50F206BC9FAC318DCDDBEFE35A2158AA2DD6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResolutionSettings_t2E436EB43090A993B3D4AEDD39B8CBB007F954BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1D66044B1E449F63E6A32359B0F07B35C767E650;
IL2CPP_EXTERN_C String_t* _stringLiteral2375165D26BB55F57D2F81F646CDE703E7803615;
IL2CPP_EXTERN_C String_t* _stringLiteral2C91CDDCE5498D2D95273E9C4922AD529E3C45C7;
IL2CPP_EXTERN_C String_t* _stringLiteral2F53B3319C2F9400291B2D9AE0C7468A878BE5A1;
IL2CPP_EXTERN_C String_t* _stringLiteral37E3136B56829071B1FC580847B1FF3FFD8990A8;
IL2CPP_EXTERN_C String_t* _stringLiteral5A4031B88E8A8625124B937BA7E93710E73A5C2C;
IL2CPP_EXTERN_C String_t* _stringLiteral7B08003E3F63B5535A81BFBD1D1DF13C08E085A7;
IL2CPP_EXTERN_C String_t* _stringLiteral808B7558B5F050AABB65AD0B7343729995A2638E;
IL2CPP_EXTERN_C String_t* _stringLiteral83236B570867C6D6A8DA25A4E7BD7C64180C348D;
IL2CPP_EXTERN_C String_t* _stringLiteralA1E6A62819FC0D3ADAEC17F7AC0ACE7C8F09E2D4;
IL2CPP_EXTERN_C String_t* _stringLiteralA6C0ECB9431B19E08F6B2DB28C72765B3EE30A7F;
IL2CPP_EXTERN_C String_t* _stringLiteralE44B4B90DD2950B7D9824B4C0EF144616EEE1442;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCloseMissionImgU3Ed__55_System_Collections_IEnumerator_Reset_m526462CF276701BC0759502F93EE32C82296DD28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDecreaseEnduranceU3Ed__50_System_Collections_IEnumerator_Reset_m73A1EA66151D86665248EF63AEBBA599F2832AE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPlusScoreU3Ed__47_System_Collections_IEnumerator_Reset_m735B14C34AF77969D7B00CF49CEE0B492CCF640D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShowAdWhenReadyU3Ed__8_System_Collections_IEnumerator_Reset_m8A5BD44D9B4CE59B45B81EE52BD42E2EAFE8E893_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitAfterContinueU3Ed__51_System_Collections_IEnumerator_Reset_m6AA2F8A922B6A6E63346E15625F3E4EE4E3984D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitColorChangeU3Ed__24_System_Collections_IEnumerator_Reset_mD942941084529972D1E058EFEEE83593AB70D106_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitLightOffU3Ed__25_System_Collections_IEnumerator_Reset_m0394540DBEBEDFAAE77AED7BA44294710045BECB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitMissionU3Ed__56_System_Collections_IEnumerator_Reset_mE201136BFD107F6E4970A7C7D6A554C049483BBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitOpenRTEndU3Ed__35_System_Collections_IEnumerator_Reset_m220CE47341D46D6551A09266ED47ADA0971314AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitRandomItemAniU3Ed__34_System_Collections_IEnumerator_Reset_m9F49DA323374C3878EFD8EF481CB3712A5B45A52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitResetTimeU3Ed__53_System_Collections_IEnumerator_Reset_m2556698754BE388BF7CD6BA1556878CA1952E9D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitforPhoneOnU3Ed__37_System_Collections_IEnumerator_Reset_m69AC6F3D74C1434D56AC9C71F03AF122BA3E99A3_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StatU5BU5D_t53A480EE91EA338274DD85B6C7F83DC38FCA4573;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// Stat
struct  Stat_t7D7F6CA2A979BAC8379B551A124960110A6C4426  : public RuntimeObject
{
public:
	// System.String Stat::name
	String_t* ___name_0;
	// System.Int32 Stat::statLevel
	int32_t ___statLevel_1;
	// System.Int32[] Stat::statAbility
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___statAbility_2;
	// System.String Stat::explain
	String_t* ___explain_3;
	// UnityEngine.UI.Text Stat::presentEffect_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___presentEffect_text_4;
	// UnityEngine.UI.Text Stat::presentLv_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___presentLv_text_5;
	// UnityEngine.UI.Text Stat::nextLvEffect_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___nextLvEffect_text_6;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Stat_t7D7F6CA2A979BAC8379B551A124960110A6C4426, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_statLevel_1() { return static_cast<int32_t>(offsetof(Stat_t7D7F6CA2A979BAC8379B551A124960110A6C4426, ___statLevel_1)); }
	inline int32_t get_statLevel_1() const { return ___statLevel_1; }
	inline int32_t* get_address_of_statLevel_1() { return &___statLevel_1; }
	inline void set_statLevel_1(int32_t value)
	{
		___statLevel_1 = value;
	}

	inline static int32_t get_offset_of_statAbility_2() { return static_cast<int32_t>(offsetof(Stat_t7D7F6CA2A979BAC8379B551A124960110A6C4426, ___statAbility_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_statAbility_2() const { return ___statAbility_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_statAbility_2() { return &___statAbility_2; }
	inline void set_statAbility_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___statAbility_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___statAbility_2), (void*)value);
	}

	inline static int32_t get_offset_of_explain_3() { return static_cast<int32_t>(offsetof(Stat_t7D7F6CA2A979BAC8379B551A124960110A6C4426, ___explain_3)); }
	inline String_t* get_explain_3() const { return ___explain_3; }
	inline String_t** get_address_of_explain_3() { return &___explain_3; }
	inline void set_explain_3(String_t* value)
	{
		___explain_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___explain_3), (void*)value);
	}

	inline static int32_t get_offset_of_presentEffect_text_4() { return static_cast<int32_t>(offsetof(Stat_t7D7F6CA2A979BAC8379B551A124960110A6C4426, ___presentEffect_text_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_presentEffect_text_4() const { return ___presentEffect_text_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_presentEffect_text_4() { return &___presentEffect_text_4; }
	inline void set_presentEffect_text_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___presentEffect_text_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___presentEffect_text_4), (void*)value);
	}

	inline static int32_t get_offset_of_presentLv_text_5() { return static_cast<int32_t>(offsetof(Stat_t7D7F6CA2A979BAC8379B551A124960110A6C4426, ___presentLv_text_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_presentLv_text_5() const { return ___presentLv_text_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_presentLv_text_5() { return &___presentLv_text_5; }
	inline void set_presentLv_text_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___presentLv_text_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___presentLv_text_5), (void*)value);
	}

	inline static int32_t get_offset_of_nextLvEffect_text_6() { return static_cast<int32_t>(offsetof(Stat_t7D7F6CA2A979BAC8379B551A124960110A6C4426, ___nextLvEffect_text_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_nextLvEffect_text_6() const { return ___nextLvEffect_text_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_nextLvEffect_text_6() { return &___nextLvEffect_text_6; }
	inline void set_nextLvEffect_text_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___nextLvEffect_text_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextLvEffect_text_6), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener
struct  OnGameThreadDiscoveryListener_tA8F52AF6E109E1D8FC2E09248EAD887F5BAEE461  : public RuntimeObject
{
public:
	// GooglePlayGames.BasicApi.Nearby.IDiscoveryListener GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener::mListener
	RuntimeObject* ___mListener_0;

public:
	inline static int32_t get_offset_of_mListener_0() { return static_cast<int32_t>(offsetof(OnGameThreadDiscoveryListener_tA8F52AF6E109E1D8FC2E09248EAD887F5BAEE461, ___mListener_0)); }
	inline RuntimeObject* get_mListener_0() const { return ___mListener_0; }
	inline RuntimeObject** get_address_of_mListener_0() { return &___mListener_0; }
	inline void set_mListener_0(RuntimeObject* value)
	{
		___mListener_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mListener_0), (void*)value);
	}
};


// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener
struct  OnGameThreadMessageListener_tC0036576C495E967400B0EA79D9A87E5B8F44AE1  : public RuntimeObject
{
public:
	// GooglePlayGames.BasicApi.Nearby.IMessageListener GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener::mListener
	RuntimeObject* ___mListener_0;

public:
	inline static int32_t get_offset_of_mListener_0() { return static_cast<int32_t>(offsetof(OnGameThreadMessageListener_tC0036576C495E967400B0EA79D9A87E5B8F44AE1, ___mListener_0)); }
	inline RuntimeObject* get_mListener_0() const { return ___mListener_0; }
	inline RuntimeObject** get_address_of_mListener_0() { return &___mListener_0; }
	inline void set_mListener_0(RuntimeObject* value)
	{
		___mListener_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mListener_0), (void*)value);
	}
};


// TicketMgr/<WaitOpenRTEnd>d__35
struct  U3CWaitOpenRTEndU3Ed__35_t09256C88893E983105BE0ECEE7541E8C34781AB2  : public RuntimeObject
{
public:
	// System.Int32 TicketMgr/<WaitOpenRTEnd>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TicketMgr/<WaitOpenRTEnd>d__35::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TicketMgr TicketMgr/<WaitOpenRTEnd>d__35::<>4__this
	TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitOpenRTEndU3Ed__35_t09256C88893E983105BE0ECEE7541E8C34781AB2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitOpenRTEndU3Ed__35_t09256C88893E983105BE0ECEE7541E8C34781AB2, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWaitOpenRTEndU3Ed__35_t09256C88893E983105BE0ECEE7541E8C34781AB2, ___U3CU3E4__this_2)); }
	inline TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// TicketMgr/<WaitRandomItemAni>d__34
struct  U3CWaitRandomItemAniU3Ed__34_t1EC3118B981CF50990B4B7A9CE62F24B5E4005D0  : public RuntimeObject
{
public:
	// System.Int32 TicketMgr/<WaitRandomItemAni>d__34::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TicketMgr/<WaitRandomItemAni>d__34::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TicketMgr TicketMgr/<WaitRandomItemAni>d__34::<>4__this
	TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitRandomItemAniU3Ed__34_t1EC3118B981CF50990B4B7A9CE62F24B5E4005D0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitRandomItemAniU3Ed__34_t1EC3118B981CF50990B4B7A9CE62F24B5E4005D0, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWaitRandomItemAniU3Ed__34_t1EC3118B981CF50990B4B7A9CE62F24B5E4005D0, ___U3CU3E4__this_2)); }
	inline TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// TutorialMgr/<WaitAfterContinue>d__51
struct  U3CWaitAfterContinueU3Ed__51_t4AE026D29B7CB32199323462CA02BE95DA070C19  : public RuntimeObject
{
public:
	// System.Int32 TutorialMgr/<WaitAfterContinue>d__51::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TutorialMgr/<WaitAfterContinue>d__51::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TutorialMgr TutorialMgr/<WaitAfterContinue>d__51::<>4__this
	TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitAfterContinueU3Ed__51_t4AE026D29B7CB32199323462CA02BE95DA070C19, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitAfterContinueU3Ed__51_t4AE026D29B7CB32199323462CA02BE95DA070C19, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWaitAfterContinueU3Ed__51_t4AE026D29B7CB32199323462CA02BE95DA070C19, ___U3CU3E4__this_2)); }
	inline TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// TutorialMgr/<WaitColorChange>d__24
struct  U3CWaitColorChangeU3Ed__24_t671C1DA756B52989A8A8913A50638F87E198AB86  : public RuntimeObject
{
public:
	// System.Int32 TutorialMgr/<WaitColorChange>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TutorialMgr/<WaitColorChange>d__24::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.String TutorialMgr/<WaitColorChange>d__24::color
	String_t* ___color_2;
	// TutorialMgr TutorialMgr/<WaitColorChange>d__24::<>4__this
	TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitColorChangeU3Ed__24_t671C1DA756B52989A8A8913A50638F87E198AB86, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitColorChangeU3Ed__24_t671C1DA756B52989A8A8913A50638F87E198AB86, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(U3CWaitColorChangeU3Ed__24_t671C1DA756B52989A8A8913A50638F87E198AB86, ___color_2)); }
	inline String_t* get_color_2() const { return ___color_2; }
	inline String_t** get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(String_t* value)
	{
		___color_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___color_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CWaitColorChangeU3Ed__24_t671C1DA756B52989A8A8913A50638F87E198AB86, ___U3CU3E4__this_3)); }
	inline TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// TutorialMgr/<WaitLightOff>d__25
struct  U3CWaitLightOffU3Ed__25_tA22B97B64769E96CBAA2C74B0ACAF239828B6E41  : public RuntimeObject
{
public:
	// System.Int32 TutorialMgr/<WaitLightOff>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TutorialMgr/<WaitLightOff>d__25::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single TutorialMgr/<WaitLightOff>d__25::time
	float ___time_2;
	// TutorialMgr TutorialMgr/<WaitLightOff>d__25::<>4__this
	TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitLightOffU3Ed__25_tA22B97B64769E96CBAA2C74B0ACAF239828B6E41, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitLightOffU3Ed__25_tA22B97B64769E96CBAA2C74B0ACAF239828B6E41, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(U3CWaitLightOffU3Ed__25_tA22B97B64769E96CBAA2C74B0ACAF239828B6E41, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CWaitLightOffU3Ed__25_tA22B97B64769E96CBAA2C74B0ACAF239828B6E41, ___U3CU3E4__this_3)); }
	inline TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// TutorialMgr/<WaitResetTime>d__53
struct  U3CWaitResetTimeU3Ed__53_t06086594BB5116DE3F360600D32CAAE4606A1A48  : public RuntimeObject
{
public:
	// System.Int32 TutorialMgr/<WaitResetTime>d__53::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TutorialMgr/<WaitResetTime>d__53::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitResetTimeU3Ed__53_t06086594BB5116DE3F360600D32CAAE4606A1A48, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitResetTimeU3Ed__53_t06086594BB5116DE3F360600D32CAAE4606A1A48, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// TutorialMgr/<WaitforPhoneOn>d__37
struct  U3CWaitforPhoneOnU3Ed__37_tA5EF9FE510FB20FAF29F56F16AEE168E8444AAF9  : public RuntimeObject
{
public:
	// System.Int32 TutorialMgr/<WaitforPhoneOn>d__37::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TutorialMgr/<WaitforPhoneOn>d__37::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TutorialMgr TutorialMgr/<WaitforPhoneOn>d__37::<>4__this
	TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitforPhoneOnU3Ed__37_tA5EF9FE510FB20FAF29F56F16AEE168E8444AAF9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitforPhoneOnU3Ed__37_tA5EF9FE510FB20FAF29F56F16AEE168E8444AAF9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWaitforPhoneOnU3Ed__37_tA5EF9FE510FB20FAF29F56F16AEE168E8444AAF9, ___U3CU3E4__this_2)); }
	inline TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// TvGameMgr/<CloseMissionImg>d__55
struct  U3CCloseMissionImgU3Ed__55_t3E8B05F0EFE76FF712BFF586E10AD7FEA9E1EFDC  : public RuntimeObject
{
public:
	// System.Int32 TvGameMgr/<CloseMissionImg>d__55::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TvGameMgr/<CloseMissionImg>d__55::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single TvGameMgr/<CloseMissionImg>d__55::waittime
	float ___waittime_2;
	// TvGameMgr TvGameMgr/<CloseMissionImg>d__55::<>4__this
	TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCloseMissionImgU3Ed__55_t3E8B05F0EFE76FF712BFF586E10AD7FEA9E1EFDC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCloseMissionImgU3Ed__55_t3E8B05F0EFE76FF712BFF586E10AD7FEA9E1EFDC, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_waittime_2() { return static_cast<int32_t>(offsetof(U3CCloseMissionImgU3Ed__55_t3E8B05F0EFE76FF712BFF586E10AD7FEA9E1EFDC, ___waittime_2)); }
	inline float get_waittime_2() const { return ___waittime_2; }
	inline float* get_address_of_waittime_2() { return &___waittime_2; }
	inline void set_waittime_2(float value)
	{
		___waittime_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CCloseMissionImgU3Ed__55_t3E8B05F0EFE76FF712BFF586E10AD7FEA9E1EFDC, ___U3CU3E4__this_3)); }
	inline TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// TvGameMgr/<DecreaseEndurance>d__50
struct  U3CDecreaseEnduranceU3Ed__50_t6EEF1D2655D9B83253EE4A2A73DE10969C6F3C0F  : public RuntimeObject
{
public:
	// System.Int32 TvGameMgr/<DecreaseEndurance>d__50::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TvGameMgr/<DecreaseEndurance>d__50::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TvGameMgr TvGameMgr/<DecreaseEndurance>d__50::<>4__this
	TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDecreaseEnduranceU3Ed__50_t6EEF1D2655D9B83253EE4A2A73DE10969C6F3C0F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDecreaseEnduranceU3Ed__50_t6EEF1D2655D9B83253EE4A2A73DE10969C6F3C0F, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDecreaseEnduranceU3Ed__50_t6EEF1D2655D9B83253EE4A2A73DE10969C6F3C0F, ___U3CU3E4__this_2)); }
	inline TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// TvGameMgr/<PlusScore>d__47
struct  U3CPlusScoreU3Ed__47_t27B0AE547D0422F352AE54E116E71B0A1FEC0F10  : public RuntimeObject
{
public:
	// System.Int32 TvGameMgr/<PlusScore>d__47::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TvGameMgr/<PlusScore>d__47::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TvGameMgr TvGameMgr/<PlusScore>d__47::<>4__this
	TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPlusScoreU3Ed__47_t27B0AE547D0422F352AE54E116E71B0A1FEC0F10, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPlusScoreU3Ed__47_t27B0AE547D0422F352AE54E116E71B0A1FEC0F10, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPlusScoreU3Ed__47_t27B0AE547D0422F352AE54E116E71B0A1FEC0F10, ___U3CU3E4__this_2)); }
	inline TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// TvGameMgr/<WaitMission>d__56
struct  U3CWaitMissionU3Ed__56_t59EDCCAD3964067859AC54E89ED67F0CEA7E143C  : public RuntimeObject
{
public:
	// System.Int32 TvGameMgr/<WaitMission>d__56::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TvGameMgr/<WaitMission>d__56::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single TvGameMgr/<WaitMission>d__56::time
	float ___time_2;
	// TvGameMgr TvGameMgr/<WaitMission>d__56::<>4__this
	TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitMissionU3Ed__56_t59EDCCAD3964067859AC54E89ED67F0CEA7E143C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitMissionU3Ed__56_t59EDCCAD3964067859AC54E89ED67F0CEA7E143C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(U3CWaitMissionU3Ed__56_t59EDCCAD3964067859AC54E89ED67F0CEA7E143C, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CWaitMissionU3Ed__56_t59EDCCAD3964067859AC54E89ED67F0CEA7E143C, ___U3CU3E4__this_3)); }
	inline TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// UnityAdsMgr/<ShowAdWhenReady>d__8
struct  U3CShowAdWhenReadyU3Ed__8_tF8CAB47B2E1089E8266B722F3D42BC37BC3EA532  : public RuntimeObject
{
public:
	// System.Int32 UnityAdsMgr/<ShowAdWhenReady>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityAdsMgr/<ShowAdWhenReady>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityAdsMgr UnityAdsMgr/<ShowAdWhenReady>d__8::<>4__this
	UnityAdsMgr_t33D8DE69F0F8B22831767D5376841535472C3BC0 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CShowAdWhenReadyU3Ed__8_tF8CAB47B2E1089E8266B722F3D42BC37BC3EA532, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CShowAdWhenReadyU3Ed__8_tF8CAB47B2E1089E8266B722F3D42BC37BC3EA532, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CShowAdWhenReadyU3Ed__8_tF8CAB47B2E1089E8266B722F3D42BC37BC3EA532, ___U3CU3E4__this_2)); }
	inline UnityAdsMgr_t33D8DE69F0F8B22831767D5376841535472C3BC0 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline UnityAdsMgr_t33D8DE69F0F8B22831767D5376841535472C3BC0 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(UnityAdsMgr_t33D8DE69F0F8B22831767D5376841535472C3BC0 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c
struct  U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_StaticFields
{
public:
	// GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<>9
	U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * ___U3CU3E9_0;
	// System.Func`2<System.Boolean,System.String> GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<>9__14_0
	Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * ___U3CU3E9__14_0_1;
	// System.Func`2<System.Boolean,System.String> GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<>9__14_1
	Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * ___U3CU3E9__14_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__14_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_StaticFields, ___U3CU3E9__14_0_1)); }
	inline Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * get_U3CU3E9__14_0_1() const { return ___U3CU3E9__14_0_1; }
	inline Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 ** get_address_of_U3CU3E9__14_0_1() { return &___U3CU3E9__14_0_1; }
	inline void set_U3CU3E9__14_0_1(Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * value)
	{
		___U3CU3E9__14_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__14_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__14_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_StaticFields, ___U3CU3E9__14_1_2)); }
	inline Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * get_U3CU3E9__14_1_2() const { return ___U3CU3E9__14_1_2; }
	inline Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 ** get_address_of_U3CU3E9__14_1_2() { return &___U3CU3E9__14_1_2; }
	inline void set_U3CU3E9__14_1_2(Func_2_t5E042946E7E9007421385C5EEF2B8566F0EC30A7 * value)
	{
		___U3CU3E9__14_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__14_1_2), (void*)value);
	}
};


// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener/<>c__DisplayClass3_0
struct  U3CU3Ec__DisplayClass3_0_tDBD1EA268703AB432125788330B6A6173A98CCFC  : public RuntimeObject
{
public:
	// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener/<>c__DisplayClass3_0::<>4__this
	OnGameThreadDiscoveryListener_tA8F52AF6E109E1D8FC2E09248EAD887F5BAEE461 * ___U3CU3E4__this_0;
	// System.String GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener/<>c__DisplayClass3_0::lostEndpointId
	String_t* ___lostEndpointId_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tDBD1EA268703AB432125788330B6A6173A98CCFC, ___U3CU3E4__this_0)); }
	inline OnGameThreadDiscoveryListener_tA8F52AF6E109E1D8FC2E09248EAD887F5BAEE461 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline OnGameThreadDiscoveryListener_tA8F52AF6E109E1D8FC2E09248EAD887F5BAEE461 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(OnGameThreadDiscoveryListener_tA8F52AF6E109E1D8FC2E09248EAD887F5BAEE461 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_lostEndpointId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tDBD1EA268703AB432125788330B6A6173A98CCFC, ___lostEndpointId_1)); }
	inline String_t* get_lostEndpointId_1() const { return ___lostEndpointId_1; }
	inline String_t** get_address_of_lostEndpointId_1() { return &___lostEndpointId_1; }
	inline void set_lostEndpointId_1(String_t* value)
	{
		___lostEndpointId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lostEndpointId_1), (void*)value);
	}
};


// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass2_0
struct  U3CU3Ec__DisplayClass2_0_tA8CAA40AF7E63A15CBEBE280B1337FE9ADE6CAD5  : public RuntimeObject
{
public:
	// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass2_0::<>4__this
	OnGameThreadMessageListener_tC0036576C495E967400B0EA79D9A87E5B8F44AE1 * ___U3CU3E4__this_0;
	// System.String GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass2_0::remoteEndpointId
	String_t* ___remoteEndpointId_1;
	// System.Byte[] GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass2_0::data
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data_2;
	// System.Boolean GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass2_0::isReliableMessage
	bool ___isReliableMessage_3;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tA8CAA40AF7E63A15CBEBE280B1337FE9ADE6CAD5, ___U3CU3E4__this_0)); }
	inline OnGameThreadMessageListener_tC0036576C495E967400B0EA79D9A87E5B8F44AE1 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline OnGameThreadMessageListener_tC0036576C495E967400B0EA79D9A87E5B8F44AE1 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(OnGameThreadMessageListener_tC0036576C495E967400B0EA79D9A87E5B8F44AE1 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_remoteEndpointId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tA8CAA40AF7E63A15CBEBE280B1337FE9ADE6CAD5, ___remoteEndpointId_1)); }
	inline String_t* get_remoteEndpointId_1() const { return ___remoteEndpointId_1; }
	inline String_t** get_address_of_remoteEndpointId_1() { return &___remoteEndpointId_1; }
	inline void set_remoteEndpointId_1(String_t* value)
	{
		___remoteEndpointId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteEndpointId_1), (void*)value);
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tA8CAA40AF7E63A15CBEBE280B1337FE9ADE6CAD5, ___data_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_data_2() const { return ___data_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_2), (void*)value);
	}

	inline static int32_t get_offset_of_isReliableMessage_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tA8CAA40AF7E63A15CBEBE280B1337FE9ADE6CAD5, ___isReliableMessage_3)); }
	inline bool get_isReliableMessage_3() const { return ___isReliableMessage_3; }
	inline bool* get_address_of_isReliableMessage_3() { return &___isReliableMessage_3; }
	inline void set_isReliableMessage_3(bool value)
	{
		___isReliableMessage_3 = value;
	}
};


// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass3_0
struct  U3CU3Ec__DisplayClass3_0_tFB0C2E6D2ED758CA8CDBC373282072749C1FA9DB  : public RuntimeObject
{
public:
	// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass3_0::<>4__this
	OnGameThreadMessageListener_tC0036576C495E967400B0EA79D9A87E5B8F44AE1 * ___U3CU3E4__this_0;
	// System.String GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass3_0::remoteEndpointId
	String_t* ___remoteEndpointId_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tFB0C2E6D2ED758CA8CDBC373282072749C1FA9DB, ___U3CU3E4__this_0)); }
	inline OnGameThreadMessageListener_tC0036576C495E967400B0EA79D9A87E5B8F44AE1 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline OnGameThreadMessageListener_tC0036576C495E967400B0EA79D9A87E5B8F44AE1 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(OnGameThreadMessageListener_tC0036576C495E967400B0EA79D9A87E5B8F44AE1 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_remoteEndpointId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tFB0C2E6D2ED758CA8CDBC373282072749C1FA9DB, ___remoteEndpointId_1)); }
	inline String_t* get_remoteEndpointId_1() const { return ___remoteEndpointId_1; }
	inline String_t** get_address_of_remoteEndpointId_1() { return &___remoteEndpointId_1; }
	inline void set_remoteEndpointId_1(String_t* value)
	{
		___remoteEndpointId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteEndpointId_1), (void*)value);
	}
};


// GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy/<>c__DisplayClass2_0
struct  U3CU3Ec__DisplayClass2_0_t7AC9953B2421A79B7821986D0B9D970A5996C8A4  : public RuntimeObject
{
public:
	// GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy/<>c__DisplayClass2_0::<>4__this
	OnCaptureOverlayStateListenerProxy_tD7A939B0C9AE046FAAAB7093F51DB81FF91AF5D7 * ___U3CU3E4__this_0;
	// System.Int32 GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy/<>c__DisplayClass2_0::overlayState
	int32_t ___overlayState_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t7AC9953B2421A79B7821986D0B9D970A5996C8A4, ___U3CU3E4__this_0)); }
	inline OnCaptureOverlayStateListenerProxy_tD7A939B0C9AE046FAAAB7093F51DB81FF91AF5D7 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline OnCaptureOverlayStateListenerProxy_tD7A939B0C9AE046FAAAB7093F51DB81FF91AF5D7 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(OnCaptureOverlayStateListenerProxy_tD7A939B0C9AE046FAAAB7093F51DB81FF91AF5D7 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_overlayState_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t7AC9953B2421A79B7821986D0B9D970A5996C8A4, ___overlayState_1)); }
	inline int32_t get_overlayState_1() const { return ___overlayState_1; }
	inline int32_t* get_address_of_overlayState_1() { return &___overlayState_1; }
	inline void set_overlayState_1(int32_t value)
	{
		___overlayState_1 = value;
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
};


// GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct  EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288 
{
public:
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mEndpointId
	String_t* ___mEndpointId_0;
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mName
	String_t* ___mName_1;
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mServiceId
	String_t* ___mServiceId_2;

public:
	inline static int32_t get_offset_of_mEndpointId_0() { return static_cast<int32_t>(offsetof(EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288, ___mEndpointId_0)); }
	inline String_t* get_mEndpointId_0() const { return ___mEndpointId_0; }
	inline String_t** get_address_of_mEndpointId_0() { return &___mEndpointId_0; }
	inline void set_mEndpointId_0(String_t* value)
	{
		___mEndpointId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mEndpointId_0), (void*)value);
	}

	inline static int32_t get_offset_of_mName_1() { return static_cast<int32_t>(offsetof(EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288, ___mName_1)); }
	inline String_t* get_mName_1() const { return ___mName_1; }
	inline String_t** get_address_of_mName_1() { return &___mName_1; }
	inline void set_mName_1(String_t* value)
	{
		___mName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mName_1), (void*)value);
	}

	inline static int32_t get_offset_of_mServiceId_2() { return static_cast<int32_t>(offsetof(EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288, ___mServiceId_2)); }
	inline String_t* get_mServiceId_2() const { return ___mServiceId_2; }
	inline String_t** get_address_of_mServiceId_2() { return &___mServiceId_2; }
	inline void set_mServiceId_2(String_t* value)
	{
		___mServiceId_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mServiceId_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshaled_pinvoke
{
	char* ___mEndpointId_0;
	char* ___mName_1;
	char* ___mServiceId_2;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288_marshaled_com
{
	Il2CppChar* ___mEndpointId_0;
	Il2CppChar* ___mName_1;
	Il2CppChar* ___mServiceId_2;
};

// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct  Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct  SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// System.UInt64
struct  UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.WaitForSecondsRealtime
struct  WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;

public:
	inline static int32_t get_offset_of_U3CwaitTimeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40, ___U3CwaitTimeU3Ek__BackingField_0)); }
	inline float get_U3CwaitTimeU3Ek__BackingField_0() const { return ___U3CwaitTimeU3Ek__BackingField_0; }
	inline float* get_address_of_U3CwaitTimeU3Ek__BackingField_0() { return &___U3CwaitTimeU3Ek__BackingField_0; }
	inline void set_U3CwaitTimeU3Ek__BackingField_0(float value)
	{
		___U3CwaitTimeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_WaitUntilTime_1() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40, ___m_WaitUntilTime_1)); }
	inline float get_m_WaitUntilTime_1() const { return ___m_WaitUntilTime_1; }
	inline float* get_address_of_m_WaitUntilTime_1() { return &___m_WaitUntilTime_1; }
	inline void set_m_WaitUntilTime_1(float value)
	{
		___m_WaitUntilTime_1 = value;
	}
};


// UnityEngine.AndroidJavaProxy
struct  AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;

public:
	inline static int32_t get_offset_of_javaInterface_0() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___javaInterface_0)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get_javaInterface_0() const { return ___javaInterface_0; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of_javaInterface_0() { return &___javaInterface_0; }
	inline void set_javaInterface_0(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		___javaInterface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___javaInterface_0), (void*)value);
	}

	inline static int32_t get_offset_of_proxyObject_1() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF, ___proxyObject_1)); }
	inline intptr_t get_proxyObject_1() const { return ___proxyObject_1; }
	inline intptr_t* get_address_of_proxyObject_1() { return &___proxyObject_1; }
	inline void set_proxyObject_1(intptr_t value)
	{
		___proxyObject_1 = value;
	}
};

struct AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;

public:
	inline static int32_t get_offset_of_s_JavaLangSystemClass_2() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_JavaLangSystemClass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_s_JavaLangSystemClass_2() const { return ___s_JavaLangSystemClass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_s_JavaLangSystemClass_2() { return &___s_JavaLangSystemClass_2; }
	inline void set_s_JavaLangSystemClass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___s_JavaLangSystemClass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_JavaLangSystemClass_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_HashCodeMethodID_3() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF_StaticFields, ___s_HashCodeMethodID_3)); }
	inline intptr_t get_s_HashCodeMethodID_3() const { return ___s_HashCodeMethodID_3; }
	inline intptr_t* get_address_of_s_HashCodeMethodID_3() { return &___s_HashCodeMethodID_3; }
	inline void set_s_HashCodeMethodID_3(intptr_t value)
	{
		___s_HashCodeMethodID_3 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct  ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.TrackedReference
struct  TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// GooglePlayGames.BasicApi.VideoCaptureOverlayState
struct  VideoCaptureOverlayState_tA17231C04D53BDB1FB8F4C6D87C7A5D4FEAFAC83 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.VideoCaptureOverlayState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoCaptureOverlayState_tA17231C04D53BDB1FB8F4C6D87C7A5D4FEAFAC83, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct  FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct  Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct  Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct  Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct  Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener/<>c__DisplayClass2_0
struct  U3CU3Ec__DisplayClass2_0_t3AB64EA834826C490341842E1F025B45BE316BB7  : public RuntimeObject
{
public:
	// GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener/<>c__DisplayClass2_0::<>4__this
	OnGameThreadDiscoveryListener_tA8F52AF6E109E1D8FC2E09248EAD887F5BAEE461 * ___U3CU3E4__this_0;
	// GooglePlayGames.BasicApi.Nearby.EndpointDetails GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener/<>c__DisplayClass2_0::discoveredEndpoint
	EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288  ___discoveredEndpoint_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t3AB64EA834826C490341842E1F025B45BE316BB7, ___U3CU3E4__this_0)); }
	inline OnGameThreadDiscoveryListener_tA8F52AF6E109E1D8FC2E09248EAD887F5BAEE461 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline OnGameThreadDiscoveryListener_tA8F52AF6E109E1D8FC2E09248EAD887F5BAEE461 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(OnGameThreadDiscoveryListener_tA8F52AF6E109E1D8FC2E09248EAD887F5BAEE461 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_discoveredEndpoint_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t3AB64EA834826C490341842E1F025B45BE316BB7, ___discoveredEndpoint_1)); }
	inline EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288  get_discoveredEndpoint_1() const { return ___discoveredEndpoint_1; }
	inline EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288 * get_address_of_discoveredEndpoint_1() { return &___discoveredEndpoint_1; }
	inline void set_discoveredEndpoint_1(EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288  value)
	{
		___discoveredEndpoint_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___discoveredEndpoint_1))->___mEndpointId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___discoveredEndpoint_1))->___mName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___discoveredEndpoint_1))->___mServiceId_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.AnimationState
struct  AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD  : public TrackedReference_t17AA313389C655DCF279F96A2D85332B29596514
{
public:

public:
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.UI.Navigation
struct  Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.ScriptableObject
struct  ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy
struct  OnCaptureOverlayStateListenerProxy_tD7A939B0C9AE046FAAAB7093F51DB81FF91AF5D7  : public AndroidJavaProxy_tA8C86826A74CB7CC5511CB353DBA595C9270D9AF
{
public:
	// GooglePlayGames.BasicApi.Video.CaptureOverlayStateListener GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy::mListener
	RuntimeObject* ___mListener_4;

public:
	inline static int32_t get_offset_of_mListener_4() { return static_cast<int32_t>(offsetof(OnCaptureOverlayStateListenerProxy_tD7A939B0C9AE046FAAAB7093F51DB81FF91AF5D7, ___mListener_4)); }
	inline RuntimeObject* get_mListener_4() const { return ___mListener_4; }
	inline RuntimeObject** get_address_of_mListener_4() { return &___mListener_4; }
	inline void set_mListener_4(RuntimeObject* value)
	{
		___mListener_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mListener_4), (void*)value);
	}
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// DifficultyData
struct  DifficultyData_tB1A89BA060411BADB493F4CAA1D05880D1F2C4F2  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Single[] DifficultyData::stageTimeMin
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___stageTimeMin_4;
	// System.Single[] DifficultyData::stageTimeMax
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___stageTimeMax_5;
	// System.Single[] DifficultyData::safeMin
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___safeMin_6;
	// System.Single[] DifficultyData::safeMax
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___safeMax_7;
	// System.Single[] DifficultyData::dangerMin
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___dangerMin_8;
	// System.Single[] DifficultyData::dangerMax
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___dangerMax_9;
	// System.Single[] DifficultyData::middleMin
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___middleMin_10;
	// System.Single[] DifficultyData::middleMax
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___middleMax_11;
	// System.Single[] DifficultyData::decreasePortion
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___decreasePortion_12;
	// System.Single DifficultyData::period
	float ___period_13;
	// System.Int32[] DifficultyData::noticeDecrease
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___noticeDecrease_14;

public:
	inline static int32_t get_offset_of_stageTimeMin_4() { return static_cast<int32_t>(offsetof(DifficultyData_tB1A89BA060411BADB493F4CAA1D05880D1F2C4F2, ___stageTimeMin_4)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_stageTimeMin_4() const { return ___stageTimeMin_4; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_stageTimeMin_4() { return &___stageTimeMin_4; }
	inline void set_stageTimeMin_4(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___stageTimeMin_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stageTimeMin_4), (void*)value);
	}

	inline static int32_t get_offset_of_stageTimeMax_5() { return static_cast<int32_t>(offsetof(DifficultyData_tB1A89BA060411BADB493F4CAA1D05880D1F2C4F2, ___stageTimeMax_5)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_stageTimeMax_5() const { return ___stageTimeMax_5; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_stageTimeMax_5() { return &___stageTimeMax_5; }
	inline void set_stageTimeMax_5(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___stageTimeMax_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stageTimeMax_5), (void*)value);
	}

	inline static int32_t get_offset_of_safeMin_6() { return static_cast<int32_t>(offsetof(DifficultyData_tB1A89BA060411BADB493F4CAA1D05880D1F2C4F2, ___safeMin_6)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_safeMin_6() const { return ___safeMin_6; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_safeMin_6() { return &___safeMin_6; }
	inline void set_safeMin_6(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___safeMin_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeMin_6), (void*)value);
	}

	inline static int32_t get_offset_of_safeMax_7() { return static_cast<int32_t>(offsetof(DifficultyData_tB1A89BA060411BADB493F4CAA1D05880D1F2C4F2, ___safeMax_7)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_safeMax_7() const { return ___safeMax_7; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_safeMax_7() { return &___safeMax_7; }
	inline void set_safeMax_7(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___safeMax_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeMax_7), (void*)value);
	}

	inline static int32_t get_offset_of_dangerMin_8() { return static_cast<int32_t>(offsetof(DifficultyData_tB1A89BA060411BADB493F4CAA1D05880D1F2C4F2, ___dangerMin_8)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_dangerMin_8() const { return ___dangerMin_8; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_dangerMin_8() { return &___dangerMin_8; }
	inline void set_dangerMin_8(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___dangerMin_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dangerMin_8), (void*)value);
	}

	inline static int32_t get_offset_of_dangerMax_9() { return static_cast<int32_t>(offsetof(DifficultyData_tB1A89BA060411BADB493F4CAA1D05880D1F2C4F2, ___dangerMax_9)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_dangerMax_9() const { return ___dangerMax_9; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_dangerMax_9() { return &___dangerMax_9; }
	inline void set_dangerMax_9(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___dangerMax_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dangerMax_9), (void*)value);
	}

	inline static int32_t get_offset_of_middleMin_10() { return static_cast<int32_t>(offsetof(DifficultyData_tB1A89BA060411BADB493F4CAA1D05880D1F2C4F2, ___middleMin_10)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_middleMin_10() const { return ___middleMin_10; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_middleMin_10() { return &___middleMin_10; }
	inline void set_middleMin_10(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___middleMin_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___middleMin_10), (void*)value);
	}

	inline static int32_t get_offset_of_middleMax_11() { return static_cast<int32_t>(offsetof(DifficultyData_tB1A89BA060411BADB493F4CAA1D05880D1F2C4F2, ___middleMax_11)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_middleMax_11() const { return ___middleMax_11; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_middleMax_11() { return &___middleMax_11; }
	inline void set_middleMax_11(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___middleMax_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___middleMax_11), (void*)value);
	}

	inline static int32_t get_offset_of_decreasePortion_12() { return static_cast<int32_t>(offsetof(DifficultyData_tB1A89BA060411BADB493F4CAA1D05880D1F2C4F2, ___decreasePortion_12)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_decreasePortion_12() const { return ___decreasePortion_12; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_decreasePortion_12() { return &___decreasePortion_12; }
	inline void set_decreasePortion_12(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___decreasePortion_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decreasePortion_12), (void*)value);
	}

	inline static int32_t get_offset_of_period_13() { return static_cast<int32_t>(offsetof(DifficultyData_tB1A89BA060411BADB493F4CAA1D05880D1F2C4F2, ___period_13)); }
	inline float get_period_13() const { return ___period_13; }
	inline float* get_address_of_period_13() { return &___period_13; }
	inline void set_period_13(float value)
	{
		___period_13 = value;
	}

	inline static int32_t get_offset_of_noticeDecrease_14() { return static_cast<int32_t>(offsetof(DifficultyData_tB1A89BA060411BADB493F4CAA1D05880D1F2C4F2, ___noticeDecrease_14)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_noticeDecrease_14() const { return ___noticeDecrease_14; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_noticeDecrease_14() { return &___noticeDecrease_14; }
	inline void set_noticeDecrease_14(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___noticeDecrease_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___noticeDecrease_14), (void*)value);
	}
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Animation
struct  Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct  AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioSource
struct  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// BackkeyMgr
struct  BackkeyMgr_t3215C98AD2E7EFE9AA62C0171B32DEEFB4239C45  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Menus[] BackkeyMgr::menus
	MenusU5BU5D_tA1EBAC3E01FD1A56076664BBB746C907ADFCAE10* ___menus_6;
	// BackUpDataMgr BackkeyMgr::backUpDataMgr
	BackUpDataMgr_t6E9ADBA6198051028255BA61E8E2909CF205DF13 * ___backUpDataMgr_7;
	// GPGSMng BackkeyMgr::gpgsMng
	GPGSMng_t3617E7177E6FF6253F7B01F8F79964211DCE171D * ___gpgsMng_8;
	// UnityEngine.GameObject BackkeyMgr::GPGSlogout_Message
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GPGSlogout_Message_9;
	// System.Boolean BackkeyMgr::isQuitting
	bool ___isQuitting_10;

public:
	inline static int32_t get_offset_of_menus_6() { return static_cast<int32_t>(offsetof(BackkeyMgr_t3215C98AD2E7EFE9AA62C0171B32DEEFB4239C45, ___menus_6)); }
	inline MenusU5BU5D_tA1EBAC3E01FD1A56076664BBB746C907ADFCAE10* get_menus_6() const { return ___menus_6; }
	inline MenusU5BU5D_tA1EBAC3E01FD1A56076664BBB746C907ADFCAE10** get_address_of_menus_6() { return &___menus_6; }
	inline void set_menus_6(MenusU5BU5D_tA1EBAC3E01FD1A56076664BBB746C907ADFCAE10* value)
	{
		___menus_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___menus_6), (void*)value);
	}

	inline static int32_t get_offset_of_backUpDataMgr_7() { return static_cast<int32_t>(offsetof(BackkeyMgr_t3215C98AD2E7EFE9AA62C0171B32DEEFB4239C45, ___backUpDataMgr_7)); }
	inline BackUpDataMgr_t6E9ADBA6198051028255BA61E8E2909CF205DF13 * get_backUpDataMgr_7() const { return ___backUpDataMgr_7; }
	inline BackUpDataMgr_t6E9ADBA6198051028255BA61E8E2909CF205DF13 ** get_address_of_backUpDataMgr_7() { return &___backUpDataMgr_7; }
	inline void set_backUpDataMgr_7(BackUpDataMgr_t6E9ADBA6198051028255BA61E8E2909CF205DF13 * value)
	{
		___backUpDataMgr_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backUpDataMgr_7), (void*)value);
	}

	inline static int32_t get_offset_of_gpgsMng_8() { return static_cast<int32_t>(offsetof(BackkeyMgr_t3215C98AD2E7EFE9AA62C0171B32DEEFB4239C45, ___gpgsMng_8)); }
	inline GPGSMng_t3617E7177E6FF6253F7B01F8F79964211DCE171D * get_gpgsMng_8() const { return ___gpgsMng_8; }
	inline GPGSMng_t3617E7177E6FF6253F7B01F8F79964211DCE171D ** get_address_of_gpgsMng_8() { return &___gpgsMng_8; }
	inline void set_gpgsMng_8(GPGSMng_t3617E7177E6FF6253F7B01F8F79964211DCE171D * value)
	{
		___gpgsMng_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gpgsMng_8), (void*)value);
	}

	inline static int32_t get_offset_of_GPGSlogout_Message_9() { return static_cast<int32_t>(offsetof(BackkeyMgr_t3215C98AD2E7EFE9AA62C0171B32DEEFB4239C45, ___GPGSlogout_Message_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_GPGSlogout_Message_9() const { return ___GPGSlogout_Message_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_GPGSlogout_Message_9() { return &___GPGSlogout_Message_9; }
	inline void set_GPGSlogout_Message_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___GPGSlogout_Message_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GPGSlogout_Message_9), (void*)value);
	}

	inline static int32_t get_offset_of_isQuitting_10() { return static_cast<int32_t>(offsetof(BackkeyMgr_t3215C98AD2E7EFE9AA62C0171B32DEEFB4239C45, ___isQuitting_10)); }
	inline bool get_isQuitting_10() const { return ___isQuitting_10; }
	inline bool* get_address_of_isQuitting_10() { return &___isQuitting_10; }
	inline void set_isQuitting_10(bool value)
	{
		___isQuitting_10 = value;
	}
};

struct BackkeyMgr_t3215C98AD2E7EFE9AA62C0171B32DEEFB4239C45_StaticFields
{
public:
	// System.Int32 BackkeyMgr::numOfOpenedMenus
	int32_t ___numOfOpenedMenus_4;
	// System.Boolean BackkeyMgr::backEnabled
	bool ___backEnabled_5;

public:
	inline static int32_t get_offset_of_numOfOpenedMenus_4() { return static_cast<int32_t>(offsetof(BackkeyMgr_t3215C98AD2E7EFE9AA62C0171B32DEEFB4239C45_StaticFields, ___numOfOpenedMenus_4)); }
	inline int32_t get_numOfOpenedMenus_4() const { return ___numOfOpenedMenus_4; }
	inline int32_t* get_address_of_numOfOpenedMenus_4() { return &___numOfOpenedMenus_4; }
	inline void set_numOfOpenedMenus_4(int32_t value)
	{
		___numOfOpenedMenus_4 = value;
	}

	inline static int32_t get_offset_of_backEnabled_5() { return static_cast<int32_t>(offsetof(BackkeyMgr_t3215C98AD2E7EFE9AA62C0171B32DEEFB4239C45_StaticFields, ___backEnabled_5)); }
	inline bool get_backEnabled_5() const { return ___backEnabled_5; }
	inline bool* get_address_of_backEnabled_5() { return &___backEnabled_5; }
	inline void set_backEnabled_5(bool value)
	{
		___backEnabled_5 = value;
	}
};


// DataManager
struct  DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TvGameMgr DataManager::tvgameMgr
	TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * ___tvgameMgr_4;
	// KatalkGameMgr DataManager::katalkGameMgr
	KatalkGameMgr_tFC6829AF28819804C713254F0B5B96BBE4147776 * ___katalkGameMgr_5;
	// SnackGameMgr DataManager::snackGameMgr
	SnackGameMgr_t753894511F69E7A4EB2E5AA5EAFFED1B63684081 * ___snackGameMgr_6;
	// InGameMgr DataManager::inGameMgr
	InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 * ___inGameMgr_7;
	// Option DataManager::option
	Option_t4668F0CFD50CE7253A226099157E10033328C0E7 * ___option_8;
	// CoinMgr DataManager::coinMgr
	CoinMgr_tD1020715095479E870A6900CD7EB3FEB6799CF50 * ___coinMgr_9;
	// ItemMgr DataManager::itemMgr
	ItemMgr_t7E210A71B7FC2B9D76B7FD54A59ACE50E5A33D85 * ___itemMgr_10;
	// PhoneStore DataManager::phoneStore
	PhoneStore_t4EC34CE63F3C9E033AC2DFE9F2E67ABC19BAE4B4 * ___phoneStore_11;
	// SnackStore DataManager::snackStore
	SnackStore_t05E20AE1F6DEDEFC544C19F0DBB6C2724CFB6714 * ___snackStore_12;
	// TutorialMgr DataManager::tutorialMgr
	TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * ___tutorialMgr_13;
	// AdManager DataManager::adManager
	AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * ___adManager_14;
	// EventMgr DataManager::eventMgr
	EventMgr_t9E557401B0F8153C25194DEB95AB52C9EAB864D7 * ___eventMgr_15;
	// MainSceneMgr DataManager::mainSceneMgr
	MainSceneMgr_t343ABFBEB84190D4CB9232C310D5ADD6CC0E5117 * ___mainSceneMgr_16;
	// DailyGiftMgr DataManager::dailyGiftMgr
	DailyGiftMgr_t908CDDC51C2FFF6591A567DEA9FF28E616634579 * ___dailyGiftMgr_17;
	// TicketMgr DataManager::ticketMgr
	TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2 * ___ticketMgr_18;
	// AchievementMgr DataManager::achievementMgr
	AchievementMgr_tBBA74F2FEEB64270659732DB117AC9F39379F713 * ___achievementMgr_19;
	// LevelMgr DataManager::levelMgr
	LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503 * ___levelMgr_20;
	// BackUpDataMgr DataManager::backUpDataMgr
	BackUpDataMgr_t6E9ADBA6198051028255BA61E8E2909CF205DF13 * ___backUpDataMgr_21;
	// System.Boolean DataManager::isAfterCloudLoad
	bool ___isAfterCloudLoad_22;

public:
	inline static int32_t get_offset_of_tvgameMgr_4() { return static_cast<int32_t>(offsetof(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2, ___tvgameMgr_4)); }
	inline TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * get_tvgameMgr_4() const { return ___tvgameMgr_4; }
	inline TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 ** get_address_of_tvgameMgr_4() { return &___tvgameMgr_4; }
	inline void set_tvgameMgr_4(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * value)
	{
		___tvgameMgr_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tvgameMgr_4), (void*)value);
	}

	inline static int32_t get_offset_of_katalkGameMgr_5() { return static_cast<int32_t>(offsetof(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2, ___katalkGameMgr_5)); }
	inline KatalkGameMgr_tFC6829AF28819804C713254F0B5B96BBE4147776 * get_katalkGameMgr_5() const { return ___katalkGameMgr_5; }
	inline KatalkGameMgr_tFC6829AF28819804C713254F0B5B96BBE4147776 ** get_address_of_katalkGameMgr_5() { return &___katalkGameMgr_5; }
	inline void set_katalkGameMgr_5(KatalkGameMgr_tFC6829AF28819804C713254F0B5B96BBE4147776 * value)
	{
		___katalkGameMgr_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___katalkGameMgr_5), (void*)value);
	}

	inline static int32_t get_offset_of_snackGameMgr_6() { return static_cast<int32_t>(offsetof(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2, ___snackGameMgr_6)); }
	inline SnackGameMgr_t753894511F69E7A4EB2E5AA5EAFFED1B63684081 * get_snackGameMgr_6() const { return ___snackGameMgr_6; }
	inline SnackGameMgr_t753894511F69E7A4EB2E5AA5EAFFED1B63684081 ** get_address_of_snackGameMgr_6() { return &___snackGameMgr_6; }
	inline void set_snackGameMgr_6(SnackGameMgr_t753894511F69E7A4EB2E5AA5EAFFED1B63684081 * value)
	{
		___snackGameMgr_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___snackGameMgr_6), (void*)value);
	}

	inline static int32_t get_offset_of_inGameMgr_7() { return static_cast<int32_t>(offsetof(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2, ___inGameMgr_7)); }
	inline InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 * get_inGameMgr_7() const { return ___inGameMgr_7; }
	inline InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 ** get_address_of_inGameMgr_7() { return &___inGameMgr_7; }
	inline void set_inGameMgr_7(InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 * value)
	{
		___inGameMgr_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inGameMgr_7), (void*)value);
	}

	inline static int32_t get_offset_of_option_8() { return static_cast<int32_t>(offsetof(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2, ___option_8)); }
	inline Option_t4668F0CFD50CE7253A226099157E10033328C0E7 * get_option_8() const { return ___option_8; }
	inline Option_t4668F0CFD50CE7253A226099157E10033328C0E7 ** get_address_of_option_8() { return &___option_8; }
	inline void set_option_8(Option_t4668F0CFD50CE7253A226099157E10033328C0E7 * value)
	{
		___option_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___option_8), (void*)value);
	}

	inline static int32_t get_offset_of_coinMgr_9() { return static_cast<int32_t>(offsetof(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2, ___coinMgr_9)); }
	inline CoinMgr_tD1020715095479E870A6900CD7EB3FEB6799CF50 * get_coinMgr_9() const { return ___coinMgr_9; }
	inline CoinMgr_tD1020715095479E870A6900CD7EB3FEB6799CF50 ** get_address_of_coinMgr_9() { return &___coinMgr_9; }
	inline void set_coinMgr_9(CoinMgr_tD1020715095479E870A6900CD7EB3FEB6799CF50 * value)
	{
		___coinMgr_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coinMgr_9), (void*)value);
	}

	inline static int32_t get_offset_of_itemMgr_10() { return static_cast<int32_t>(offsetof(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2, ___itemMgr_10)); }
	inline ItemMgr_t7E210A71B7FC2B9D76B7FD54A59ACE50E5A33D85 * get_itemMgr_10() const { return ___itemMgr_10; }
	inline ItemMgr_t7E210A71B7FC2B9D76B7FD54A59ACE50E5A33D85 ** get_address_of_itemMgr_10() { return &___itemMgr_10; }
	inline void set_itemMgr_10(ItemMgr_t7E210A71B7FC2B9D76B7FD54A59ACE50E5A33D85 * value)
	{
		___itemMgr_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemMgr_10), (void*)value);
	}

	inline static int32_t get_offset_of_phoneStore_11() { return static_cast<int32_t>(offsetof(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2, ___phoneStore_11)); }
	inline PhoneStore_t4EC34CE63F3C9E033AC2DFE9F2E67ABC19BAE4B4 * get_phoneStore_11() const { return ___phoneStore_11; }
	inline PhoneStore_t4EC34CE63F3C9E033AC2DFE9F2E67ABC19BAE4B4 ** get_address_of_phoneStore_11() { return &___phoneStore_11; }
	inline void set_phoneStore_11(PhoneStore_t4EC34CE63F3C9E033AC2DFE9F2E67ABC19BAE4B4 * value)
	{
		___phoneStore_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___phoneStore_11), (void*)value);
	}

	inline static int32_t get_offset_of_snackStore_12() { return static_cast<int32_t>(offsetof(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2, ___snackStore_12)); }
	inline SnackStore_t05E20AE1F6DEDEFC544C19F0DBB6C2724CFB6714 * get_snackStore_12() const { return ___snackStore_12; }
	inline SnackStore_t05E20AE1F6DEDEFC544C19F0DBB6C2724CFB6714 ** get_address_of_snackStore_12() { return &___snackStore_12; }
	inline void set_snackStore_12(SnackStore_t05E20AE1F6DEDEFC544C19F0DBB6C2724CFB6714 * value)
	{
		___snackStore_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___snackStore_12), (void*)value);
	}

	inline static int32_t get_offset_of_tutorialMgr_13() { return static_cast<int32_t>(offsetof(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2, ___tutorialMgr_13)); }
	inline TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * get_tutorialMgr_13() const { return ___tutorialMgr_13; }
	inline TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD ** get_address_of_tutorialMgr_13() { return &___tutorialMgr_13; }
	inline void set_tutorialMgr_13(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * value)
	{
		___tutorialMgr_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tutorialMgr_13), (void*)value);
	}

	inline static int32_t get_offset_of_adManager_14() { return static_cast<int32_t>(offsetof(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2, ___adManager_14)); }
	inline AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * get_adManager_14() const { return ___adManager_14; }
	inline AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 ** get_address_of_adManager_14() { return &___adManager_14; }
	inline void set_adManager_14(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * value)
	{
		___adManager_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adManager_14), (void*)value);
	}

	inline static int32_t get_offset_of_eventMgr_15() { return static_cast<int32_t>(offsetof(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2, ___eventMgr_15)); }
	inline EventMgr_t9E557401B0F8153C25194DEB95AB52C9EAB864D7 * get_eventMgr_15() const { return ___eventMgr_15; }
	inline EventMgr_t9E557401B0F8153C25194DEB95AB52C9EAB864D7 ** get_address_of_eventMgr_15() { return &___eventMgr_15; }
	inline void set_eventMgr_15(EventMgr_t9E557401B0F8153C25194DEB95AB52C9EAB864D7 * value)
	{
		___eventMgr_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventMgr_15), (void*)value);
	}

	inline static int32_t get_offset_of_mainSceneMgr_16() { return static_cast<int32_t>(offsetof(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2, ___mainSceneMgr_16)); }
	inline MainSceneMgr_t343ABFBEB84190D4CB9232C310D5ADD6CC0E5117 * get_mainSceneMgr_16() const { return ___mainSceneMgr_16; }
	inline MainSceneMgr_t343ABFBEB84190D4CB9232C310D5ADD6CC0E5117 ** get_address_of_mainSceneMgr_16() { return &___mainSceneMgr_16; }
	inline void set_mainSceneMgr_16(MainSceneMgr_t343ABFBEB84190D4CB9232C310D5ADD6CC0E5117 * value)
	{
		___mainSceneMgr_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainSceneMgr_16), (void*)value);
	}

	inline static int32_t get_offset_of_dailyGiftMgr_17() { return static_cast<int32_t>(offsetof(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2, ___dailyGiftMgr_17)); }
	inline DailyGiftMgr_t908CDDC51C2FFF6591A567DEA9FF28E616634579 * get_dailyGiftMgr_17() const { return ___dailyGiftMgr_17; }
	inline DailyGiftMgr_t908CDDC51C2FFF6591A567DEA9FF28E616634579 ** get_address_of_dailyGiftMgr_17() { return &___dailyGiftMgr_17; }
	inline void set_dailyGiftMgr_17(DailyGiftMgr_t908CDDC51C2FFF6591A567DEA9FF28E616634579 * value)
	{
		___dailyGiftMgr_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dailyGiftMgr_17), (void*)value);
	}

	inline static int32_t get_offset_of_ticketMgr_18() { return static_cast<int32_t>(offsetof(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2, ___ticketMgr_18)); }
	inline TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2 * get_ticketMgr_18() const { return ___ticketMgr_18; }
	inline TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2 ** get_address_of_ticketMgr_18() { return &___ticketMgr_18; }
	inline void set_ticketMgr_18(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2 * value)
	{
		___ticketMgr_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ticketMgr_18), (void*)value);
	}

	inline static int32_t get_offset_of_achievementMgr_19() { return static_cast<int32_t>(offsetof(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2, ___achievementMgr_19)); }
	inline AchievementMgr_tBBA74F2FEEB64270659732DB117AC9F39379F713 * get_achievementMgr_19() const { return ___achievementMgr_19; }
	inline AchievementMgr_tBBA74F2FEEB64270659732DB117AC9F39379F713 ** get_address_of_achievementMgr_19() { return &___achievementMgr_19; }
	inline void set_achievementMgr_19(AchievementMgr_tBBA74F2FEEB64270659732DB117AC9F39379F713 * value)
	{
		___achievementMgr_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___achievementMgr_19), (void*)value);
	}

	inline static int32_t get_offset_of_levelMgr_20() { return static_cast<int32_t>(offsetof(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2, ___levelMgr_20)); }
	inline LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503 * get_levelMgr_20() const { return ___levelMgr_20; }
	inline LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503 ** get_address_of_levelMgr_20() { return &___levelMgr_20; }
	inline void set_levelMgr_20(LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503 * value)
	{
		___levelMgr_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelMgr_20), (void*)value);
	}

	inline static int32_t get_offset_of_backUpDataMgr_21() { return static_cast<int32_t>(offsetof(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2, ___backUpDataMgr_21)); }
	inline BackUpDataMgr_t6E9ADBA6198051028255BA61E8E2909CF205DF13 * get_backUpDataMgr_21() const { return ___backUpDataMgr_21; }
	inline BackUpDataMgr_t6E9ADBA6198051028255BA61E8E2909CF205DF13 ** get_address_of_backUpDataMgr_21() { return &___backUpDataMgr_21; }
	inline void set_backUpDataMgr_21(BackUpDataMgr_t6E9ADBA6198051028255BA61E8E2909CF205DF13 * value)
	{
		___backUpDataMgr_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backUpDataMgr_21), (void*)value);
	}

	inline static int32_t get_offset_of_isAfterCloudLoad_22() { return static_cast<int32_t>(offsetof(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2, ___isAfterCloudLoad_22)); }
	inline bool get_isAfterCloudLoad_22() const { return ___isAfterCloudLoad_22; }
	inline bool* get_address_of_isAfterCloudLoad_22() { return &___isAfterCloudLoad_22; }
	inline void set_isAfterCloudLoad_22(bool value)
	{
		___isAfterCloudLoad_22 = value;
	}
};


// GageMove
struct  GageMove_t12372F686CA9F6984B88FD2B0CE2704AA1CC9969  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 GageMove::UI_GageValue
	int32_t ___UI_GageValue_4;
	// UnityEngine.UI.Slider GageMove::Gage_slider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___Gage_slider_5;
	// System.Collections.IEnumerator GageMove::gagemoving
	RuntimeObject* ___gagemoving_6;

public:
	inline static int32_t get_offset_of_UI_GageValue_4() { return static_cast<int32_t>(offsetof(GageMove_t12372F686CA9F6984B88FD2B0CE2704AA1CC9969, ___UI_GageValue_4)); }
	inline int32_t get_UI_GageValue_4() const { return ___UI_GageValue_4; }
	inline int32_t* get_address_of_UI_GageValue_4() { return &___UI_GageValue_4; }
	inline void set_UI_GageValue_4(int32_t value)
	{
		___UI_GageValue_4 = value;
	}

	inline static int32_t get_offset_of_Gage_slider_5() { return static_cast<int32_t>(offsetof(GageMove_t12372F686CA9F6984B88FD2B0CE2704AA1CC9969, ___Gage_slider_5)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_Gage_slider_5() const { return ___Gage_slider_5; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_Gage_slider_5() { return &___Gage_slider_5; }
	inline void set_Gage_slider_5(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___Gage_slider_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Gage_slider_5), (void*)value);
	}

	inline static int32_t get_offset_of_gagemoving_6() { return static_cast<int32_t>(offsetof(GageMove_t12372F686CA9F6984B88FD2B0CE2704AA1CC9969, ___gagemoving_6)); }
	inline RuntimeObject* get_gagemoving_6() const { return ___gagemoving_6; }
	inline RuntimeObject** get_address_of_gagemoving_6() { return &___gagemoving_6; }
	inline void set_gagemoving_6(RuntimeObject* value)
	{
		___gagemoving_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gagemoving_6), (void*)value);
	}
};


// InGameMgr
struct  InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean InGameMgr::IsPlayingGame
	bool ___IsPlayingGame_4;
	// System.Boolean InGameMgr::isPause
	bool ___isPause_6;
	// UnityEngine.GameObject InGameMgr::Pause_Menu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Pause_Menu_7;
	// UnityEngine.GameObject InGameMgr::TutorialWarningMessage_Menu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TutorialWarningMessage_Menu_8;
	// UnityEngine.GameObject InGameMgr::BfStartGame
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BfStartGame_9;
	// System.UInt64[] InGameMgr::PlayTime
	UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___PlayTime_10;
	// System.Int32[] InGameMgr::numOfPlay
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___numOfPlay_11;
	// System.Int32 InGameMgr::numOfFinish
	int32_t ___numOfFinish_12;
	// System.Boolean InGameMgr::didReviewed
	bool ___didReviewed_13;
	// UnityEngine.GameObject InGameMgr::Review_Menu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Review_Menu_14;
	// System.Int32 InGameMgr::playTimeEach
	int32_t ___playTimeEach_15;
	// System.Int32 InGameMgr::stage
	int32_t ___stage_16;
	// DifficultyData InGameMgr::difficultyData
	DifficultyData_tB1A89BA060411BADB493F4CAA1D05880D1F2C4F2 * ___difficultyData_17;
	// DataManager InGameMgr::dataManager
	DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * ___dataManager_18;
	// TutorialMgr InGameMgr::tutorialMgr
	TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * ___tutorialMgr_19;

public:
	inline static int32_t get_offset_of_IsPlayingGame_4() { return static_cast<int32_t>(offsetof(InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58, ___IsPlayingGame_4)); }
	inline bool get_IsPlayingGame_4() const { return ___IsPlayingGame_4; }
	inline bool* get_address_of_IsPlayingGame_4() { return &___IsPlayingGame_4; }
	inline void set_IsPlayingGame_4(bool value)
	{
		___IsPlayingGame_4 = value;
	}

	inline static int32_t get_offset_of_isPause_6() { return static_cast<int32_t>(offsetof(InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58, ___isPause_6)); }
	inline bool get_isPause_6() const { return ___isPause_6; }
	inline bool* get_address_of_isPause_6() { return &___isPause_6; }
	inline void set_isPause_6(bool value)
	{
		___isPause_6 = value;
	}

	inline static int32_t get_offset_of_Pause_Menu_7() { return static_cast<int32_t>(offsetof(InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58, ___Pause_Menu_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Pause_Menu_7() const { return ___Pause_Menu_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Pause_Menu_7() { return &___Pause_Menu_7; }
	inline void set_Pause_Menu_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Pause_Menu_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Pause_Menu_7), (void*)value);
	}

	inline static int32_t get_offset_of_TutorialWarningMessage_Menu_8() { return static_cast<int32_t>(offsetof(InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58, ___TutorialWarningMessage_Menu_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TutorialWarningMessage_Menu_8() const { return ___TutorialWarningMessage_Menu_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TutorialWarningMessage_Menu_8() { return &___TutorialWarningMessage_Menu_8; }
	inline void set_TutorialWarningMessage_Menu_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TutorialWarningMessage_Menu_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TutorialWarningMessage_Menu_8), (void*)value);
	}

	inline static int32_t get_offset_of_BfStartGame_9() { return static_cast<int32_t>(offsetof(InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58, ___BfStartGame_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BfStartGame_9() const { return ___BfStartGame_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BfStartGame_9() { return &___BfStartGame_9; }
	inline void set_BfStartGame_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BfStartGame_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BfStartGame_9), (void*)value);
	}

	inline static int32_t get_offset_of_PlayTime_10() { return static_cast<int32_t>(offsetof(InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58, ___PlayTime_10)); }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* get_PlayTime_10() const { return ___PlayTime_10; }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2** get_address_of_PlayTime_10() { return &___PlayTime_10; }
	inline void set_PlayTime_10(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* value)
	{
		___PlayTime_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayTime_10), (void*)value);
	}

	inline static int32_t get_offset_of_numOfPlay_11() { return static_cast<int32_t>(offsetof(InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58, ___numOfPlay_11)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_numOfPlay_11() const { return ___numOfPlay_11; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_numOfPlay_11() { return &___numOfPlay_11; }
	inline void set_numOfPlay_11(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___numOfPlay_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numOfPlay_11), (void*)value);
	}

	inline static int32_t get_offset_of_numOfFinish_12() { return static_cast<int32_t>(offsetof(InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58, ___numOfFinish_12)); }
	inline int32_t get_numOfFinish_12() const { return ___numOfFinish_12; }
	inline int32_t* get_address_of_numOfFinish_12() { return &___numOfFinish_12; }
	inline void set_numOfFinish_12(int32_t value)
	{
		___numOfFinish_12 = value;
	}

	inline static int32_t get_offset_of_didReviewed_13() { return static_cast<int32_t>(offsetof(InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58, ___didReviewed_13)); }
	inline bool get_didReviewed_13() const { return ___didReviewed_13; }
	inline bool* get_address_of_didReviewed_13() { return &___didReviewed_13; }
	inline void set_didReviewed_13(bool value)
	{
		___didReviewed_13 = value;
	}

	inline static int32_t get_offset_of_Review_Menu_14() { return static_cast<int32_t>(offsetof(InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58, ___Review_Menu_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Review_Menu_14() const { return ___Review_Menu_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Review_Menu_14() { return &___Review_Menu_14; }
	inline void set_Review_Menu_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Review_Menu_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Review_Menu_14), (void*)value);
	}

	inline static int32_t get_offset_of_playTimeEach_15() { return static_cast<int32_t>(offsetof(InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58, ___playTimeEach_15)); }
	inline int32_t get_playTimeEach_15() const { return ___playTimeEach_15; }
	inline int32_t* get_address_of_playTimeEach_15() { return &___playTimeEach_15; }
	inline void set_playTimeEach_15(int32_t value)
	{
		___playTimeEach_15 = value;
	}

	inline static int32_t get_offset_of_stage_16() { return static_cast<int32_t>(offsetof(InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58, ___stage_16)); }
	inline int32_t get_stage_16() const { return ___stage_16; }
	inline int32_t* get_address_of_stage_16() { return &___stage_16; }
	inline void set_stage_16(int32_t value)
	{
		___stage_16 = value;
	}

	inline static int32_t get_offset_of_difficultyData_17() { return static_cast<int32_t>(offsetof(InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58, ___difficultyData_17)); }
	inline DifficultyData_tB1A89BA060411BADB493F4CAA1D05880D1F2C4F2 * get_difficultyData_17() const { return ___difficultyData_17; }
	inline DifficultyData_tB1A89BA060411BADB493F4CAA1D05880D1F2C4F2 ** get_address_of_difficultyData_17() { return &___difficultyData_17; }
	inline void set_difficultyData_17(DifficultyData_tB1A89BA060411BADB493F4CAA1D05880D1F2C4F2 * value)
	{
		___difficultyData_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___difficultyData_17), (void*)value);
	}

	inline static int32_t get_offset_of_dataManager_18() { return static_cast<int32_t>(offsetof(InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58, ___dataManager_18)); }
	inline DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * get_dataManager_18() const { return ___dataManager_18; }
	inline DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 ** get_address_of_dataManager_18() { return &___dataManager_18; }
	inline void set_dataManager_18(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * value)
	{
		___dataManager_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataManager_18), (void*)value);
	}

	inline static int32_t get_offset_of_tutorialMgr_19() { return static_cast<int32_t>(offsetof(InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58, ___tutorialMgr_19)); }
	inline TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * get_tutorialMgr_19() const { return ___tutorialMgr_19; }
	inline TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD ** get_address_of_tutorialMgr_19() { return &___tutorialMgr_19; }
	inline void set_tutorialMgr_19(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * value)
	{
		___tutorialMgr_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tutorialMgr_19), (void*)value);
	}
};

struct InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58_StaticFields
{
public:
	// System.Int32 InGameMgr::GameMode
	int32_t ___GameMode_5;

public:
	inline static int32_t get_offset_of_GameMode_5() { return static_cast<int32_t>(offsetof(InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58_StaticFields, ___GameMode_5)); }
	inline int32_t get_GameMode_5() const { return ___GameMode_5; }
	inline int32_t* get_address_of_GameMode_5() { return &___GameMode_5; }
	inline void set_GameMode_5(int32_t value)
	{
		___GameMode_5 = value;
	}
};


// LevelMgr
struct  LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 LevelMgr::Level
	int32_t ___Level_4;
	// System.Int32 LevelMgr::Exp
	int32_t ___Exp_5;
	// System.Int32 LevelMgr::AccumulatedExp
	int32_t ___AccumulatedExp_6;
	// System.Int32 LevelMgr::LevelUpExp
	int32_t ___LevelUpExp_7;
	// System.Int32 LevelMgr::availableStat
	int32_t ___availableStat_8;
	// Stat[] LevelMgr::StatArr
	StatU5BU5D_t53A480EE91EA338274DD85B6C7F83DC38FCA4573* ___StatArr_10;
	// ItemMgr LevelMgr::itemMgr
	ItemMgr_t7E210A71B7FC2B9D76B7FD54A59ACE50E5A33D85 * ___itemMgr_11;
	// MainSceneMgr LevelMgr::mainSceneMgr
	MainSceneMgr_t343ABFBEB84190D4CB9232C310D5ADD6CC0E5117 * ___mainSceneMgr_12;
	// InGameMgr LevelMgr::inGameMgr
	InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 * ___inGameMgr_13;
	// DataManager LevelMgr::dataManager
	DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * ___dataManager_14;
	// UnityEngine.GameObject LevelMgr::Level_Menu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Level_Menu_15;
	// UnityEngine.Animation LevelMgr::Level_MenuAni
	Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * ___Level_MenuAni_16;
	// UnityEngine.UI.Text LevelMgr::LvM_Exp_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___LvM_Exp_text_17;
	// UnityEngine.UI.Text LevelMgr::LvM_Level_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___LvM_Level_text_18;
	// UnityEngine.UI.Text LevelMgr::LvM_AvailableStat_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___LvM_AvailableStat_text_19;
	// UnityEngine.UI.Text LevelMgr::Level_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Level_text_20;
	// UnityEngine.Color[] LevelMgr::LevelColors
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___LevelColors_21;
	// UnityEngine.GameObject LevelMgr::Badge_obj
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Badge_obj_22;
	// UnityEngine.UI.Text LevelMgr::Badge_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Badge_text_23;
	// UnityEngine.GameObject LevelMgr::Statup_Menu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Statup_Menu_24;
	// UnityEngine.UI.Text LevelMgr::StatName_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___StatName_text_25;
	// UnityEngine.UI.Text LevelMgr::StatExplain_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___StatExplain_text_26;
	// UnityEngine.UI.Text LevelMgr::StatUpLevel_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___StatUpLevel_text_27;
	// UnityEngine.UI.Text LevelMgr::StatUpExample_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___StatUpExample_text_28;
	// UnityEngine.GameObject LevelMgr::expImg_fix
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___expImg_fix_29;
	// UnityEngine.GameObject LevelMgr::LvM_ExpImg_fix
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___LvM_ExpImg_fix_30;
	// System.Int32 LevelMgr::UI_GageValue
	int32_t ___UI_GageValue_31;
	// UnityEngine.UI.Slider LevelMgr::ExpGage_slider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___ExpGage_slider_32;
	// UnityEngine.UI.Slider LevelMgr::LvM_ExpGage_slider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___LvM_ExpGage_slider_33;
	// System.Collections.IEnumerator LevelMgr::gagemoving
	RuntimeObject* ___gagemoving_34;
	// System.Int32 LevelMgr::virtual_stat
	int32_t ___virtual_stat_35;
	// System.Int32 LevelMgr::selectedKind
	int32_t ___selectedKind_36;

public:
	inline static int32_t get_offset_of_Level_4() { return static_cast<int32_t>(offsetof(LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503, ___Level_4)); }
	inline int32_t get_Level_4() const { return ___Level_4; }
	inline int32_t* get_address_of_Level_4() { return &___Level_4; }
	inline void set_Level_4(int32_t value)
	{
		___Level_4 = value;
	}

	inline static int32_t get_offset_of_Exp_5() { return static_cast<int32_t>(offsetof(LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503, ___Exp_5)); }
	inline int32_t get_Exp_5() const { return ___Exp_5; }
	inline int32_t* get_address_of_Exp_5() { return &___Exp_5; }
	inline void set_Exp_5(int32_t value)
	{
		___Exp_5 = value;
	}

	inline static int32_t get_offset_of_AccumulatedExp_6() { return static_cast<int32_t>(offsetof(LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503, ___AccumulatedExp_6)); }
	inline int32_t get_AccumulatedExp_6() const { return ___AccumulatedExp_6; }
	inline int32_t* get_address_of_AccumulatedExp_6() { return &___AccumulatedExp_6; }
	inline void set_AccumulatedExp_6(int32_t value)
	{
		___AccumulatedExp_6 = value;
	}

	inline static int32_t get_offset_of_LevelUpExp_7() { return static_cast<int32_t>(offsetof(LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503, ___LevelUpExp_7)); }
	inline int32_t get_LevelUpExp_7() const { return ___LevelUpExp_7; }
	inline int32_t* get_address_of_LevelUpExp_7() { return &___LevelUpExp_7; }
	inline void set_LevelUpExp_7(int32_t value)
	{
		___LevelUpExp_7 = value;
	}

	inline static int32_t get_offset_of_availableStat_8() { return static_cast<int32_t>(offsetof(LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503, ___availableStat_8)); }
	inline int32_t get_availableStat_8() const { return ___availableStat_8; }
	inline int32_t* get_address_of_availableStat_8() { return &___availableStat_8; }
	inline void set_availableStat_8(int32_t value)
	{
		___availableStat_8 = value;
	}

	inline static int32_t get_offset_of_StatArr_10() { return static_cast<int32_t>(offsetof(LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503, ___StatArr_10)); }
	inline StatU5BU5D_t53A480EE91EA338274DD85B6C7F83DC38FCA4573* get_StatArr_10() const { return ___StatArr_10; }
	inline StatU5BU5D_t53A480EE91EA338274DD85B6C7F83DC38FCA4573** get_address_of_StatArr_10() { return &___StatArr_10; }
	inline void set_StatArr_10(StatU5BU5D_t53A480EE91EA338274DD85B6C7F83DC38FCA4573* value)
	{
		___StatArr_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StatArr_10), (void*)value);
	}

	inline static int32_t get_offset_of_itemMgr_11() { return static_cast<int32_t>(offsetof(LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503, ___itemMgr_11)); }
	inline ItemMgr_t7E210A71B7FC2B9D76B7FD54A59ACE50E5A33D85 * get_itemMgr_11() const { return ___itemMgr_11; }
	inline ItemMgr_t7E210A71B7FC2B9D76B7FD54A59ACE50E5A33D85 ** get_address_of_itemMgr_11() { return &___itemMgr_11; }
	inline void set_itemMgr_11(ItemMgr_t7E210A71B7FC2B9D76B7FD54A59ACE50E5A33D85 * value)
	{
		___itemMgr_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemMgr_11), (void*)value);
	}

	inline static int32_t get_offset_of_mainSceneMgr_12() { return static_cast<int32_t>(offsetof(LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503, ___mainSceneMgr_12)); }
	inline MainSceneMgr_t343ABFBEB84190D4CB9232C310D5ADD6CC0E5117 * get_mainSceneMgr_12() const { return ___mainSceneMgr_12; }
	inline MainSceneMgr_t343ABFBEB84190D4CB9232C310D5ADD6CC0E5117 ** get_address_of_mainSceneMgr_12() { return &___mainSceneMgr_12; }
	inline void set_mainSceneMgr_12(MainSceneMgr_t343ABFBEB84190D4CB9232C310D5ADD6CC0E5117 * value)
	{
		___mainSceneMgr_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainSceneMgr_12), (void*)value);
	}

	inline static int32_t get_offset_of_inGameMgr_13() { return static_cast<int32_t>(offsetof(LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503, ___inGameMgr_13)); }
	inline InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 * get_inGameMgr_13() const { return ___inGameMgr_13; }
	inline InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 ** get_address_of_inGameMgr_13() { return &___inGameMgr_13; }
	inline void set_inGameMgr_13(InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 * value)
	{
		___inGameMgr_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inGameMgr_13), (void*)value);
	}

	inline static int32_t get_offset_of_dataManager_14() { return static_cast<int32_t>(offsetof(LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503, ___dataManager_14)); }
	inline DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * get_dataManager_14() const { return ___dataManager_14; }
	inline DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 ** get_address_of_dataManager_14() { return &___dataManager_14; }
	inline void set_dataManager_14(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * value)
	{
		___dataManager_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataManager_14), (void*)value);
	}

	inline static int32_t get_offset_of_Level_Menu_15() { return static_cast<int32_t>(offsetof(LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503, ___Level_Menu_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Level_Menu_15() const { return ___Level_Menu_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Level_Menu_15() { return &___Level_Menu_15; }
	inline void set_Level_Menu_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Level_Menu_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level_Menu_15), (void*)value);
	}

	inline static int32_t get_offset_of_Level_MenuAni_16() { return static_cast<int32_t>(offsetof(LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503, ___Level_MenuAni_16)); }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * get_Level_MenuAni_16() const { return ___Level_MenuAni_16; }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 ** get_address_of_Level_MenuAni_16() { return &___Level_MenuAni_16; }
	inline void set_Level_MenuAni_16(Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * value)
	{
		___Level_MenuAni_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level_MenuAni_16), (void*)value);
	}

	inline static int32_t get_offset_of_LvM_Exp_text_17() { return static_cast<int32_t>(offsetof(LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503, ___LvM_Exp_text_17)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_LvM_Exp_text_17() const { return ___LvM_Exp_text_17; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_LvM_Exp_text_17() { return &___LvM_Exp_text_17; }
	inline void set_LvM_Exp_text_17(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___LvM_Exp_text_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LvM_Exp_text_17), (void*)value);
	}

	inline static int32_t get_offset_of_LvM_Level_text_18() { return static_cast<int32_t>(offsetof(LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503, ___LvM_Level_text_18)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_LvM_Level_text_18() const { return ___LvM_Level_text_18; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_LvM_Level_text_18() { return &___LvM_Level_text_18; }
	inline void set_LvM_Level_text_18(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___LvM_Level_text_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LvM_Level_text_18), (void*)value);
	}

	inline static int32_t get_offset_of_LvM_AvailableStat_text_19() { return static_cast<int32_t>(offsetof(LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503, ___LvM_AvailableStat_text_19)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_LvM_AvailableStat_text_19() const { return ___LvM_AvailableStat_text_19; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_LvM_AvailableStat_text_19() { return &___LvM_AvailableStat_text_19; }
	inline void set_LvM_AvailableStat_text_19(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___LvM_AvailableStat_text_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LvM_AvailableStat_text_19), (void*)value);
	}

	inline static int32_t get_offset_of_Level_text_20() { return static_cast<int32_t>(offsetof(LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503, ___Level_text_20)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Level_text_20() const { return ___Level_text_20; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Level_text_20() { return &___Level_text_20; }
	inline void set_Level_text_20(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Level_text_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level_text_20), (void*)value);
	}

	inline static int32_t get_offset_of_LevelColors_21() { return static_cast<int32_t>(offsetof(LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503, ___LevelColors_21)); }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* get_LevelColors_21() const { return ___LevelColors_21; }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** get_address_of_LevelColors_21() { return &___LevelColors_21; }
	inline void set_LevelColors_21(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* value)
	{
		___LevelColors_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LevelColors_21), (void*)value);
	}

	inline static int32_t get_offset_of_Badge_obj_22() { return static_cast<int32_t>(offsetof(LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503, ___Badge_obj_22)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Badge_obj_22() const { return ___Badge_obj_22; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Badge_obj_22() { return &___Badge_obj_22; }
	inline void set_Badge_obj_22(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Badge_obj_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Badge_obj_22), (void*)value);
	}

	inline static int32_t get_offset_of_Badge_text_23() { return static_cast<int32_t>(offsetof(LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503, ___Badge_text_23)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Badge_text_23() const { return ___Badge_text_23; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Badge_text_23() { return &___Badge_text_23; }
	inline void set_Badge_text_23(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Badge_text_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Badge_text_23), (void*)value);
	}

	inline static int32_t get_offset_of_Statup_Menu_24() { return static_cast<int32_t>(offsetof(LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503, ___Statup_Menu_24)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Statup_Menu_24() const { return ___Statup_Menu_24; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Statup_Menu_24() { return &___Statup_Menu_24; }
	inline void set_Statup_Menu_24(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Statup_Menu_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Statup_Menu_24), (void*)value);
	}

	inline static int32_t get_offset_of_StatName_text_25() { return static_cast<int32_t>(offsetof(LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503, ___StatName_text_25)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_StatName_text_25() const { return ___StatName_text_25; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_StatName_text_25() { return &___StatName_text_25; }
	inline void set_StatName_text_25(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___StatName_text_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StatName_text_25), (void*)value);
	}

	inline static int32_t get_offset_of_StatExplain_text_26() { return static_cast<int32_t>(offsetof(LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503, ___StatExplain_text_26)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_StatExplain_text_26() const { return ___StatExplain_text_26; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_StatExplain_text_26() { return &___StatExplain_text_26; }
	inline void set_StatExplain_text_26(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___StatExplain_text_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StatExplain_text_26), (void*)value);
	}

	inline static int32_t get_offset_of_StatUpLevel_text_27() { return static_cast<int32_t>(offsetof(LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503, ___StatUpLevel_text_27)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_StatUpLevel_text_27() const { return ___StatUpLevel_text_27; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_StatUpLevel_text_27() { return &___StatUpLevel_text_27; }
	inline void set_StatUpLevel_text_27(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___StatUpLevel_text_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StatUpLevel_text_27), (void*)value);
	}

	inline static int32_t get_offset_of_StatUpExample_text_28() { return static_cast<int32_t>(offsetof(LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503, ___StatUpExample_text_28)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_StatUpExample_text_28() const { return ___StatUpExample_text_28; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_StatUpExample_text_28() { return &___StatUpExample_text_28; }
	inline void set_StatUpExample_text_28(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___StatUpExample_text_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StatUpExample_text_28), (void*)value);
	}

	inline static int32_t get_offset_of_expImg_fix_29() { return static_cast<int32_t>(offsetof(LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503, ___expImg_fix_29)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_expImg_fix_29() const { return ___expImg_fix_29; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_expImg_fix_29() { return &___expImg_fix_29; }
	inline void set_expImg_fix_29(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___expImg_fix_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___expImg_fix_29), (void*)value);
	}

	inline static int32_t get_offset_of_LvM_ExpImg_fix_30() { return static_cast<int32_t>(offsetof(LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503, ___LvM_ExpImg_fix_30)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_LvM_ExpImg_fix_30() const { return ___LvM_ExpImg_fix_30; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_LvM_ExpImg_fix_30() { return &___LvM_ExpImg_fix_30; }
	inline void set_LvM_ExpImg_fix_30(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___LvM_ExpImg_fix_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LvM_ExpImg_fix_30), (void*)value);
	}

	inline static int32_t get_offset_of_UI_GageValue_31() { return static_cast<int32_t>(offsetof(LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503, ___UI_GageValue_31)); }
	inline int32_t get_UI_GageValue_31() const { return ___UI_GageValue_31; }
	inline int32_t* get_address_of_UI_GageValue_31() { return &___UI_GageValue_31; }
	inline void set_UI_GageValue_31(int32_t value)
	{
		___UI_GageValue_31 = value;
	}

	inline static int32_t get_offset_of_ExpGage_slider_32() { return static_cast<int32_t>(offsetof(LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503, ___ExpGage_slider_32)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_ExpGage_slider_32() const { return ___ExpGage_slider_32; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_ExpGage_slider_32() { return &___ExpGage_slider_32; }
	inline void set_ExpGage_slider_32(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___ExpGage_slider_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExpGage_slider_32), (void*)value);
	}

	inline static int32_t get_offset_of_LvM_ExpGage_slider_33() { return static_cast<int32_t>(offsetof(LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503, ___LvM_ExpGage_slider_33)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_LvM_ExpGage_slider_33() const { return ___LvM_ExpGage_slider_33; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_LvM_ExpGage_slider_33() { return &___LvM_ExpGage_slider_33; }
	inline void set_LvM_ExpGage_slider_33(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___LvM_ExpGage_slider_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LvM_ExpGage_slider_33), (void*)value);
	}

	inline static int32_t get_offset_of_gagemoving_34() { return static_cast<int32_t>(offsetof(LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503, ___gagemoving_34)); }
	inline RuntimeObject* get_gagemoving_34() const { return ___gagemoving_34; }
	inline RuntimeObject** get_address_of_gagemoving_34() { return &___gagemoving_34; }
	inline void set_gagemoving_34(RuntimeObject* value)
	{
		___gagemoving_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gagemoving_34), (void*)value);
	}

	inline static int32_t get_offset_of_virtual_stat_35() { return static_cast<int32_t>(offsetof(LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503, ___virtual_stat_35)); }
	inline int32_t get_virtual_stat_35() const { return ___virtual_stat_35; }
	inline int32_t* get_address_of_virtual_stat_35() { return &___virtual_stat_35; }
	inline void set_virtual_stat_35(int32_t value)
	{
		___virtual_stat_35 = value;
	}

	inline static int32_t get_offset_of_selectedKind_36() { return static_cast<int32_t>(offsetof(LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503, ___selectedKind_36)); }
	inline int32_t get_selectedKind_36() const { return ___selectedKind_36; }
	inline int32_t* get_address_of_selectedKind_36() { return &___selectedKind_36; }
	inline void set_selectedKind_36(int32_t value)
	{
		___selectedKind_36 = value;
	}
};


// Option
struct  Option_t4668F0CFD50CE7253A226099157E10033328C0E7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Color Option::ActivedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___ActivedColor_4;
	// UnityEngine.Color Option::UnActivedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___UnActivedColor_5;
	// UnityEngine.GameObject Option::TvOptionMenu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TvOptionMenu_6;
	// UnityEngine.GameObject Option::KatalkOptionMenu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___KatalkOptionMenu_7;
	// UnityEngine.GameObject Option::Developer_Menu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Developer_Menu_8;
	// UnityEngine.UI.Image Option::TvButton_img
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___TvButton_img_9;
	// UnityEngine.UI.Image Option::KatalkButton_img
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___KatalkButton_img_10;
	// FPSDisplay Option::fpsDisplay
	FPSDisplay_tB99493D73C9C04D0BE47319995B5EBF3A63E49E4 * ___fpsDisplay_11;
	// System.Boolean Option::showFPS
	bool ___showFPS_12;
	// UnityEngine.UI.Text Option::FPS_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___FPS_text_13;
	// TeacherMgr Option::teacherMgr
	TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E * ___teacherMgr_14;
	// InGameMgr Option::inGameMgr
	InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 * ___inGameMgr_15;
	// MainSceneMgr Option::mainSceneMgr
	MainSceneMgr_t343ABFBEB84190D4CB9232C310D5ADD6CC0E5117 * ___mainSceneMgr_16;
	// DataManager Option::dataManager
	DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * ___dataManager_17;
	// UnityEngine.AudioSource[] Option::EffectSounds_AS
	AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* ___EffectSounds_AS_18;
	// UnityEngine.UI.Image[] Option::FrameLimits_img
	ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* ___FrameLimits_img_19;
	// UnityEngine.Sprite[] Option::State_sprite
	SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* ___State_sprite_20;
	// UnityEngine.UI.Text[] Option::FrameLimits_text
	TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* ___FrameLimits_text_21;
	// UnityEngine.Color[] Option::State_color
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___State_color_22;
	// System.Int32 Option::frameKind
	int32_t ___frameKind_23;
	// System.Boolean Option::smoothGage
	bool ___smoothGage_24;
	// UnityEngine.UI.Text Option::Gage_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Gage_text_25;
	// System.Single Option::gameSoundVolume
	float ___gameSoundVolume_26;
	// UnityEngine.UI.Slider Option::gameSoundVolume_slider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___gameSoundVolume_slider_27;
	// System.Single Option::BackgroundVolume
	float ___BackgroundVolume_28;
	// UnityEngine.UI.Slider Option::BackgroundVolume_slider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___BackgroundVolume_slider_29;
	// System.Boolean Option::googleLogin
	bool ___googleLogin_30;
	// UnityEngine.UI.Text Option::googleLogin_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___googleLogin_text_31;
	// GPGSMng Option::gpgsMng
	GPGSMng_t3617E7177E6FF6253F7B01F8F79964211DCE171D * ___gpgsMng_32;
	// System.Boolean Option::autoCloud
	bool ___autoCloud_33;
	// UnityEngine.UI.Text Option::autoCloud_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___autoCloud_text_34;
	// UnityEngine.GameObject Option::WillAutoSave_Menu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___WillAutoSave_Menu_35;
	// BackUpDataMgr Option::backUpDataMgr
	BackUpDataMgr_t6E9ADBA6198051028255BA61E8E2909CF205DF13 * ___backUpDataMgr_36;
	// TVButtonMgr Option::tvButtonMgr
	TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C * ___tvButtonMgr_38;
	// UnityEngine.GameObject Option::RC_HUD
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___RC_HUD_39;
	// System.Boolean Option::IsHudOn
	bool ___IsHudOn_40;
	// UnityEngine.UI.Text Option::HUD_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___HUD_text_41;
	// PhoneConMgr Option::phoneConMgr
	PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6 * ___phoneConMgr_42;
	// System.Boolean Option::IsVibrateOn
	bool ___IsVibrateOn_43;
	// UnityEngine.UI.Text Option::Vibrate_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Vibrate_text_44;

public:
	inline static int32_t get_offset_of_ActivedColor_4() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___ActivedColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_ActivedColor_4() const { return ___ActivedColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_ActivedColor_4() { return &___ActivedColor_4; }
	inline void set_ActivedColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___ActivedColor_4 = value;
	}

	inline static int32_t get_offset_of_UnActivedColor_5() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___UnActivedColor_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_UnActivedColor_5() const { return ___UnActivedColor_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_UnActivedColor_5() { return &___UnActivedColor_5; }
	inline void set_UnActivedColor_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___UnActivedColor_5 = value;
	}

	inline static int32_t get_offset_of_TvOptionMenu_6() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___TvOptionMenu_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TvOptionMenu_6() const { return ___TvOptionMenu_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TvOptionMenu_6() { return &___TvOptionMenu_6; }
	inline void set_TvOptionMenu_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TvOptionMenu_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TvOptionMenu_6), (void*)value);
	}

	inline static int32_t get_offset_of_KatalkOptionMenu_7() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___KatalkOptionMenu_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_KatalkOptionMenu_7() const { return ___KatalkOptionMenu_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_KatalkOptionMenu_7() { return &___KatalkOptionMenu_7; }
	inline void set_KatalkOptionMenu_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___KatalkOptionMenu_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KatalkOptionMenu_7), (void*)value);
	}

	inline static int32_t get_offset_of_Developer_Menu_8() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___Developer_Menu_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Developer_Menu_8() const { return ___Developer_Menu_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Developer_Menu_8() { return &___Developer_Menu_8; }
	inline void set_Developer_Menu_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Developer_Menu_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Developer_Menu_8), (void*)value);
	}

	inline static int32_t get_offset_of_TvButton_img_9() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___TvButton_img_9)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_TvButton_img_9() const { return ___TvButton_img_9; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_TvButton_img_9() { return &___TvButton_img_9; }
	inline void set_TvButton_img_9(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___TvButton_img_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TvButton_img_9), (void*)value);
	}

	inline static int32_t get_offset_of_KatalkButton_img_10() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___KatalkButton_img_10)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_KatalkButton_img_10() const { return ___KatalkButton_img_10; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_KatalkButton_img_10() { return &___KatalkButton_img_10; }
	inline void set_KatalkButton_img_10(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___KatalkButton_img_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KatalkButton_img_10), (void*)value);
	}

	inline static int32_t get_offset_of_fpsDisplay_11() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___fpsDisplay_11)); }
	inline FPSDisplay_tB99493D73C9C04D0BE47319995B5EBF3A63E49E4 * get_fpsDisplay_11() const { return ___fpsDisplay_11; }
	inline FPSDisplay_tB99493D73C9C04D0BE47319995B5EBF3A63E49E4 ** get_address_of_fpsDisplay_11() { return &___fpsDisplay_11; }
	inline void set_fpsDisplay_11(FPSDisplay_tB99493D73C9C04D0BE47319995B5EBF3A63E49E4 * value)
	{
		___fpsDisplay_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fpsDisplay_11), (void*)value);
	}

	inline static int32_t get_offset_of_showFPS_12() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___showFPS_12)); }
	inline bool get_showFPS_12() const { return ___showFPS_12; }
	inline bool* get_address_of_showFPS_12() { return &___showFPS_12; }
	inline void set_showFPS_12(bool value)
	{
		___showFPS_12 = value;
	}

	inline static int32_t get_offset_of_FPS_text_13() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___FPS_text_13)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_FPS_text_13() const { return ___FPS_text_13; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_FPS_text_13() { return &___FPS_text_13; }
	inline void set_FPS_text_13(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___FPS_text_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FPS_text_13), (void*)value);
	}

	inline static int32_t get_offset_of_teacherMgr_14() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___teacherMgr_14)); }
	inline TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E * get_teacherMgr_14() const { return ___teacherMgr_14; }
	inline TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E ** get_address_of_teacherMgr_14() { return &___teacherMgr_14; }
	inline void set_teacherMgr_14(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E * value)
	{
		___teacherMgr_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___teacherMgr_14), (void*)value);
	}

	inline static int32_t get_offset_of_inGameMgr_15() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___inGameMgr_15)); }
	inline InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 * get_inGameMgr_15() const { return ___inGameMgr_15; }
	inline InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 ** get_address_of_inGameMgr_15() { return &___inGameMgr_15; }
	inline void set_inGameMgr_15(InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 * value)
	{
		___inGameMgr_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inGameMgr_15), (void*)value);
	}

	inline static int32_t get_offset_of_mainSceneMgr_16() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___mainSceneMgr_16)); }
	inline MainSceneMgr_t343ABFBEB84190D4CB9232C310D5ADD6CC0E5117 * get_mainSceneMgr_16() const { return ___mainSceneMgr_16; }
	inline MainSceneMgr_t343ABFBEB84190D4CB9232C310D5ADD6CC0E5117 ** get_address_of_mainSceneMgr_16() { return &___mainSceneMgr_16; }
	inline void set_mainSceneMgr_16(MainSceneMgr_t343ABFBEB84190D4CB9232C310D5ADD6CC0E5117 * value)
	{
		___mainSceneMgr_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainSceneMgr_16), (void*)value);
	}

	inline static int32_t get_offset_of_dataManager_17() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___dataManager_17)); }
	inline DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * get_dataManager_17() const { return ___dataManager_17; }
	inline DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 ** get_address_of_dataManager_17() { return &___dataManager_17; }
	inline void set_dataManager_17(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * value)
	{
		___dataManager_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataManager_17), (void*)value);
	}

	inline static int32_t get_offset_of_EffectSounds_AS_18() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___EffectSounds_AS_18)); }
	inline AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* get_EffectSounds_AS_18() const { return ___EffectSounds_AS_18; }
	inline AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B** get_address_of_EffectSounds_AS_18() { return &___EffectSounds_AS_18; }
	inline void set_EffectSounds_AS_18(AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* value)
	{
		___EffectSounds_AS_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EffectSounds_AS_18), (void*)value);
	}

	inline static int32_t get_offset_of_FrameLimits_img_19() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___FrameLimits_img_19)); }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* get_FrameLimits_img_19() const { return ___FrameLimits_img_19; }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224** get_address_of_FrameLimits_img_19() { return &___FrameLimits_img_19; }
	inline void set_FrameLimits_img_19(ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* value)
	{
		___FrameLimits_img_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FrameLimits_img_19), (void*)value);
	}

	inline static int32_t get_offset_of_State_sprite_20() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___State_sprite_20)); }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* get_State_sprite_20() const { return ___State_sprite_20; }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77** get_address_of_State_sprite_20() { return &___State_sprite_20; }
	inline void set_State_sprite_20(SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* value)
	{
		___State_sprite_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___State_sprite_20), (void*)value);
	}

	inline static int32_t get_offset_of_FrameLimits_text_21() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___FrameLimits_text_21)); }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* get_FrameLimits_text_21() const { return ___FrameLimits_text_21; }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F** get_address_of_FrameLimits_text_21() { return &___FrameLimits_text_21; }
	inline void set_FrameLimits_text_21(TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* value)
	{
		___FrameLimits_text_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FrameLimits_text_21), (void*)value);
	}

	inline static int32_t get_offset_of_State_color_22() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___State_color_22)); }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* get_State_color_22() const { return ___State_color_22; }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** get_address_of_State_color_22() { return &___State_color_22; }
	inline void set_State_color_22(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* value)
	{
		___State_color_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___State_color_22), (void*)value);
	}

	inline static int32_t get_offset_of_frameKind_23() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___frameKind_23)); }
	inline int32_t get_frameKind_23() const { return ___frameKind_23; }
	inline int32_t* get_address_of_frameKind_23() { return &___frameKind_23; }
	inline void set_frameKind_23(int32_t value)
	{
		___frameKind_23 = value;
	}

	inline static int32_t get_offset_of_smoothGage_24() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___smoothGage_24)); }
	inline bool get_smoothGage_24() const { return ___smoothGage_24; }
	inline bool* get_address_of_smoothGage_24() { return &___smoothGage_24; }
	inline void set_smoothGage_24(bool value)
	{
		___smoothGage_24 = value;
	}

	inline static int32_t get_offset_of_Gage_text_25() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___Gage_text_25)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Gage_text_25() const { return ___Gage_text_25; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Gage_text_25() { return &___Gage_text_25; }
	inline void set_Gage_text_25(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Gage_text_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Gage_text_25), (void*)value);
	}

	inline static int32_t get_offset_of_gameSoundVolume_26() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___gameSoundVolume_26)); }
	inline float get_gameSoundVolume_26() const { return ___gameSoundVolume_26; }
	inline float* get_address_of_gameSoundVolume_26() { return &___gameSoundVolume_26; }
	inline void set_gameSoundVolume_26(float value)
	{
		___gameSoundVolume_26 = value;
	}

	inline static int32_t get_offset_of_gameSoundVolume_slider_27() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___gameSoundVolume_slider_27)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_gameSoundVolume_slider_27() const { return ___gameSoundVolume_slider_27; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_gameSoundVolume_slider_27() { return &___gameSoundVolume_slider_27; }
	inline void set_gameSoundVolume_slider_27(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___gameSoundVolume_slider_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameSoundVolume_slider_27), (void*)value);
	}

	inline static int32_t get_offset_of_BackgroundVolume_28() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___BackgroundVolume_28)); }
	inline float get_BackgroundVolume_28() const { return ___BackgroundVolume_28; }
	inline float* get_address_of_BackgroundVolume_28() { return &___BackgroundVolume_28; }
	inline void set_BackgroundVolume_28(float value)
	{
		___BackgroundVolume_28 = value;
	}

	inline static int32_t get_offset_of_BackgroundVolume_slider_29() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___BackgroundVolume_slider_29)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_BackgroundVolume_slider_29() const { return ___BackgroundVolume_slider_29; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_BackgroundVolume_slider_29() { return &___BackgroundVolume_slider_29; }
	inline void set_BackgroundVolume_slider_29(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___BackgroundVolume_slider_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BackgroundVolume_slider_29), (void*)value);
	}

	inline static int32_t get_offset_of_googleLogin_30() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___googleLogin_30)); }
	inline bool get_googleLogin_30() const { return ___googleLogin_30; }
	inline bool* get_address_of_googleLogin_30() { return &___googleLogin_30; }
	inline void set_googleLogin_30(bool value)
	{
		___googleLogin_30 = value;
	}

	inline static int32_t get_offset_of_googleLogin_text_31() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___googleLogin_text_31)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_googleLogin_text_31() const { return ___googleLogin_text_31; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_googleLogin_text_31() { return &___googleLogin_text_31; }
	inline void set_googleLogin_text_31(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___googleLogin_text_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___googleLogin_text_31), (void*)value);
	}

	inline static int32_t get_offset_of_gpgsMng_32() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___gpgsMng_32)); }
	inline GPGSMng_t3617E7177E6FF6253F7B01F8F79964211DCE171D * get_gpgsMng_32() const { return ___gpgsMng_32; }
	inline GPGSMng_t3617E7177E6FF6253F7B01F8F79964211DCE171D ** get_address_of_gpgsMng_32() { return &___gpgsMng_32; }
	inline void set_gpgsMng_32(GPGSMng_t3617E7177E6FF6253F7B01F8F79964211DCE171D * value)
	{
		___gpgsMng_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gpgsMng_32), (void*)value);
	}

	inline static int32_t get_offset_of_autoCloud_33() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___autoCloud_33)); }
	inline bool get_autoCloud_33() const { return ___autoCloud_33; }
	inline bool* get_address_of_autoCloud_33() { return &___autoCloud_33; }
	inline void set_autoCloud_33(bool value)
	{
		___autoCloud_33 = value;
	}

	inline static int32_t get_offset_of_autoCloud_text_34() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___autoCloud_text_34)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_autoCloud_text_34() const { return ___autoCloud_text_34; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_autoCloud_text_34() { return &___autoCloud_text_34; }
	inline void set_autoCloud_text_34(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___autoCloud_text_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___autoCloud_text_34), (void*)value);
	}

	inline static int32_t get_offset_of_WillAutoSave_Menu_35() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___WillAutoSave_Menu_35)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_WillAutoSave_Menu_35() const { return ___WillAutoSave_Menu_35; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_WillAutoSave_Menu_35() { return &___WillAutoSave_Menu_35; }
	inline void set_WillAutoSave_Menu_35(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___WillAutoSave_Menu_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WillAutoSave_Menu_35), (void*)value);
	}

	inline static int32_t get_offset_of_backUpDataMgr_36() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___backUpDataMgr_36)); }
	inline BackUpDataMgr_t6E9ADBA6198051028255BA61E8E2909CF205DF13 * get_backUpDataMgr_36() const { return ___backUpDataMgr_36; }
	inline BackUpDataMgr_t6E9ADBA6198051028255BA61E8E2909CF205DF13 ** get_address_of_backUpDataMgr_36() { return &___backUpDataMgr_36; }
	inline void set_backUpDataMgr_36(BackUpDataMgr_t6E9ADBA6198051028255BA61E8E2909CF205DF13 * value)
	{
		___backUpDataMgr_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backUpDataMgr_36), (void*)value);
	}

	inline static int32_t get_offset_of_tvButtonMgr_38() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___tvButtonMgr_38)); }
	inline TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C * get_tvButtonMgr_38() const { return ___tvButtonMgr_38; }
	inline TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C ** get_address_of_tvButtonMgr_38() { return &___tvButtonMgr_38; }
	inline void set_tvButtonMgr_38(TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C * value)
	{
		___tvButtonMgr_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tvButtonMgr_38), (void*)value);
	}

	inline static int32_t get_offset_of_RC_HUD_39() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___RC_HUD_39)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_RC_HUD_39() const { return ___RC_HUD_39; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_RC_HUD_39() { return &___RC_HUD_39; }
	inline void set_RC_HUD_39(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___RC_HUD_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RC_HUD_39), (void*)value);
	}

	inline static int32_t get_offset_of_IsHudOn_40() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___IsHudOn_40)); }
	inline bool get_IsHudOn_40() const { return ___IsHudOn_40; }
	inline bool* get_address_of_IsHudOn_40() { return &___IsHudOn_40; }
	inline void set_IsHudOn_40(bool value)
	{
		___IsHudOn_40 = value;
	}

	inline static int32_t get_offset_of_HUD_text_41() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___HUD_text_41)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_HUD_text_41() const { return ___HUD_text_41; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_HUD_text_41() { return &___HUD_text_41; }
	inline void set_HUD_text_41(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___HUD_text_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HUD_text_41), (void*)value);
	}

	inline static int32_t get_offset_of_phoneConMgr_42() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___phoneConMgr_42)); }
	inline PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6 * get_phoneConMgr_42() const { return ___phoneConMgr_42; }
	inline PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6 ** get_address_of_phoneConMgr_42() { return &___phoneConMgr_42; }
	inline void set_phoneConMgr_42(PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6 * value)
	{
		___phoneConMgr_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___phoneConMgr_42), (void*)value);
	}

	inline static int32_t get_offset_of_IsVibrateOn_43() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___IsVibrateOn_43)); }
	inline bool get_IsVibrateOn_43() const { return ___IsVibrateOn_43; }
	inline bool* get_address_of_IsVibrateOn_43() { return &___IsVibrateOn_43; }
	inline void set_IsVibrateOn_43(bool value)
	{
		___IsVibrateOn_43 = value;
	}

	inline static int32_t get_offset_of_Vibrate_text_44() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7, ___Vibrate_text_44)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Vibrate_text_44() const { return ___Vibrate_text_44; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Vibrate_text_44() { return &___Vibrate_text_44; }
	inline void set_Vibrate_text_44(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Vibrate_text_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Vibrate_text_44), (void*)value);
	}
};

struct Option_t4668F0CFD50CE7253A226099157E10033328C0E7_StaticFields
{
public:
	// System.Boolean Option::TimeToAutoCloud
	bool ___TimeToAutoCloud_37;

public:
	inline static int32_t get_offset_of_TimeToAutoCloud_37() { return static_cast<int32_t>(offsetof(Option_t4668F0CFD50CE7253A226099157E10033328C0E7_StaticFields, ___TimeToAutoCloud_37)); }
	inline bool get_TimeToAutoCloud_37() const { return ___TimeToAutoCloud_37; }
	inline bool* get_address_of_TimeToAutoCloud_37() { return &___TimeToAutoCloud_37; }
	inline void set_TimeToAutoCloud_37(bool value)
	{
		___TimeToAutoCloud_37 = value;
	}
};


// PhoneConMgr
struct  PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Sprite[] PhoneConMgr::studentSprites
	SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* ___studentSprites_4;
	// UnityEngine.UI.Image PhoneConMgr::Student
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___Student_5;
	// UnityEngine.GameObject[] PhoneConMgr::OnXXX_Students
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___OnXXX_Students_6;
	// UnityEngine.UI.Text PhoneConMgr::Time_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Time_text_7;
	// UnityEngine.UI.Text PhoneConMgr::OpenPhone_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___OpenPhone_text_8;
	// UnityEngine.UI.Text PhoneConMgr::Date_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Date_text_9;
	// UnityEngine.GameObject PhoneConMgr::Phone
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Phone_10;
	// UnityEngine.Animation PhoneConMgr::PhoneOnOff_animation
	Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * ___PhoneOnOff_animation_11;
	// KatalkGameMgr PhoneConMgr::katalkGameMgr
	KatalkGameMgr_tFC6829AF28819804C713254F0B5B96BBE4147776 * ___katalkGameMgr_12;
	// DifficultyData PhoneConMgr::katalkDifficultyData
	DifficultyData_tB1A89BA060411BADB493F4CAA1D05880D1F2C4F2 * ___katalkDifficultyData_13;
	// TeacherMgr PhoneConMgr::teacherMgr
	TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E * ___teacherMgr_14;
	// InGameMgr PhoneConMgr::inGameMgr
	InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 * ___inGameMgr_15;
	// TutorialMgr PhoneConMgr::tutorialMgr
	TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * ___tutorialMgr_16;
	// System.Boolean PhoneConMgr::isPhoneOn
	bool ___isPhoneOn_17;
	// System.Boolean PhoneConMgr::startgame
	bool ___startgame_18;
	// System.Int32 PhoneConMgr::wordStep
	int32_t ___wordStep_19;
	// UnityEngine.GameObject[] PhoneConMgr::Key_buttons
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___Key_buttons_20;
	// UnityEngine.UI.Text[] PhoneConMgr::Key_texts
	TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* ___Key_texts_21;
	// SuggestWords PhoneConMgr::suggestWords
	SuggestWords_t98447E746D542CFBC29E31430CB5B96B92FEE357 * ___suggestWords_22;
	// UnityEngine.Animation PhoneConMgr::Keyboard_ani
	Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * ___Keyboard_ani_23;
	// System.Boolean PhoneConMgr::isKeyboardOn
	bool ___isKeyboardOn_24;
	// UnityEngine.UI.Button PhoneConMgr::EnteringField_Button
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___EnteringField_Button_25;
	// UnityEngine.GameObject PhoneConMgr::KeyboardField_obj
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___KeyboardField_obj_26;
	// UnityEngine.GameObject PhoneConMgr::Range_obj
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Range_obj_27;
	// UnityEngine.GameObject PhoneConMgr::EnteringField_obj
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___EnteringField_obj_28;
	// UnityEngine.GameObject PhoneConMgr::OutsideKatalk_obj
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___OutsideKatalk_obj_29;
	// UnityEngine.AudioSource PhoneConMgr::BGM_as
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___BGM_as_30;

public:
	inline static int32_t get_offset_of_studentSprites_4() { return static_cast<int32_t>(offsetof(PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6, ___studentSprites_4)); }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* get_studentSprites_4() const { return ___studentSprites_4; }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77** get_address_of_studentSprites_4() { return &___studentSprites_4; }
	inline void set_studentSprites_4(SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* value)
	{
		___studentSprites_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___studentSprites_4), (void*)value);
	}

	inline static int32_t get_offset_of_Student_5() { return static_cast<int32_t>(offsetof(PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6, ___Student_5)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_Student_5() const { return ___Student_5; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_Student_5() { return &___Student_5; }
	inline void set_Student_5(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___Student_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Student_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnXXX_Students_6() { return static_cast<int32_t>(offsetof(PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6, ___OnXXX_Students_6)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_OnXXX_Students_6() const { return ___OnXXX_Students_6; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_OnXXX_Students_6() { return &___OnXXX_Students_6; }
	inline void set_OnXXX_Students_6(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___OnXXX_Students_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnXXX_Students_6), (void*)value);
	}

	inline static int32_t get_offset_of_Time_text_7() { return static_cast<int32_t>(offsetof(PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6, ___Time_text_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Time_text_7() const { return ___Time_text_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Time_text_7() { return &___Time_text_7; }
	inline void set_Time_text_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Time_text_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Time_text_7), (void*)value);
	}

	inline static int32_t get_offset_of_OpenPhone_text_8() { return static_cast<int32_t>(offsetof(PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6, ___OpenPhone_text_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_OpenPhone_text_8() const { return ___OpenPhone_text_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_OpenPhone_text_8() { return &___OpenPhone_text_8; }
	inline void set_OpenPhone_text_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___OpenPhone_text_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OpenPhone_text_8), (void*)value);
	}

	inline static int32_t get_offset_of_Date_text_9() { return static_cast<int32_t>(offsetof(PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6, ___Date_text_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Date_text_9() const { return ___Date_text_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Date_text_9() { return &___Date_text_9; }
	inline void set_Date_text_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Date_text_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Date_text_9), (void*)value);
	}

	inline static int32_t get_offset_of_Phone_10() { return static_cast<int32_t>(offsetof(PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6, ___Phone_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Phone_10() const { return ___Phone_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Phone_10() { return &___Phone_10; }
	inline void set_Phone_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Phone_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Phone_10), (void*)value);
	}

	inline static int32_t get_offset_of_PhoneOnOff_animation_11() { return static_cast<int32_t>(offsetof(PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6, ___PhoneOnOff_animation_11)); }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * get_PhoneOnOff_animation_11() const { return ___PhoneOnOff_animation_11; }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 ** get_address_of_PhoneOnOff_animation_11() { return &___PhoneOnOff_animation_11; }
	inline void set_PhoneOnOff_animation_11(Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * value)
	{
		___PhoneOnOff_animation_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PhoneOnOff_animation_11), (void*)value);
	}

	inline static int32_t get_offset_of_katalkGameMgr_12() { return static_cast<int32_t>(offsetof(PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6, ___katalkGameMgr_12)); }
	inline KatalkGameMgr_tFC6829AF28819804C713254F0B5B96BBE4147776 * get_katalkGameMgr_12() const { return ___katalkGameMgr_12; }
	inline KatalkGameMgr_tFC6829AF28819804C713254F0B5B96BBE4147776 ** get_address_of_katalkGameMgr_12() { return &___katalkGameMgr_12; }
	inline void set_katalkGameMgr_12(KatalkGameMgr_tFC6829AF28819804C713254F0B5B96BBE4147776 * value)
	{
		___katalkGameMgr_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___katalkGameMgr_12), (void*)value);
	}

	inline static int32_t get_offset_of_katalkDifficultyData_13() { return static_cast<int32_t>(offsetof(PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6, ___katalkDifficultyData_13)); }
	inline DifficultyData_tB1A89BA060411BADB493F4CAA1D05880D1F2C4F2 * get_katalkDifficultyData_13() const { return ___katalkDifficultyData_13; }
	inline DifficultyData_tB1A89BA060411BADB493F4CAA1D05880D1F2C4F2 ** get_address_of_katalkDifficultyData_13() { return &___katalkDifficultyData_13; }
	inline void set_katalkDifficultyData_13(DifficultyData_tB1A89BA060411BADB493F4CAA1D05880D1F2C4F2 * value)
	{
		___katalkDifficultyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___katalkDifficultyData_13), (void*)value);
	}

	inline static int32_t get_offset_of_teacherMgr_14() { return static_cast<int32_t>(offsetof(PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6, ___teacherMgr_14)); }
	inline TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E * get_teacherMgr_14() const { return ___teacherMgr_14; }
	inline TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E ** get_address_of_teacherMgr_14() { return &___teacherMgr_14; }
	inline void set_teacherMgr_14(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E * value)
	{
		___teacherMgr_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___teacherMgr_14), (void*)value);
	}

	inline static int32_t get_offset_of_inGameMgr_15() { return static_cast<int32_t>(offsetof(PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6, ___inGameMgr_15)); }
	inline InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 * get_inGameMgr_15() const { return ___inGameMgr_15; }
	inline InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 ** get_address_of_inGameMgr_15() { return &___inGameMgr_15; }
	inline void set_inGameMgr_15(InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 * value)
	{
		___inGameMgr_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inGameMgr_15), (void*)value);
	}

	inline static int32_t get_offset_of_tutorialMgr_16() { return static_cast<int32_t>(offsetof(PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6, ___tutorialMgr_16)); }
	inline TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * get_tutorialMgr_16() const { return ___tutorialMgr_16; }
	inline TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD ** get_address_of_tutorialMgr_16() { return &___tutorialMgr_16; }
	inline void set_tutorialMgr_16(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * value)
	{
		___tutorialMgr_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tutorialMgr_16), (void*)value);
	}

	inline static int32_t get_offset_of_isPhoneOn_17() { return static_cast<int32_t>(offsetof(PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6, ___isPhoneOn_17)); }
	inline bool get_isPhoneOn_17() const { return ___isPhoneOn_17; }
	inline bool* get_address_of_isPhoneOn_17() { return &___isPhoneOn_17; }
	inline void set_isPhoneOn_17(bool value)
	{
		___isPhoneOn_17 = value;
	}

	inline static int32_t get_offset_of_startgame_18() { return static_cast<int32_t>(offsetof(PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6, ___startgame_18)); }
	inline bool get_startgame_18() const { return ___startgame_18; }
	inline bool* get_address_of_startgame_18() { return &___startgame_18; }
	inline void set_startgame_18(bool value)
	{
		___startgame_18 = value;
	}

	inline static int32_t get_offset_of_wordStep_19() { return static_cast<int32_t>(offsetof(PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6, ___wordStep_19)); }
	inline int32_t get_wordStep_19() const { return ___wordStep_19; }
	inline int32_t* get_address_of_wordStep_19() { return &___wordStep_19; }
	inline void set_wordStep_19(int32_t value)
	{
		___wordStep_19 = value;
	}

	inline static int32_t get_offset_of_Key_buttons_20() { return static_cast<int32_t>(offsetof(PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6, ___Key_buttons_20)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_Key_buttons_20() const { return ___Key_buttons_20; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_Key_buttons_20() { return &___Key_buttons_20; }
	inline void set_Key_buttons_20(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___Key_buttons_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Key_buttons_20), (void*)value);
	}

	inline static int32_t get_offset_of_Key_texts_21() { return static_cast<int32_t>(offsetof(PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6, ___Key_texts_21)); }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* get_Key_texts_21() const { return ___Key_texts_21; }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F** get_address_of_Key_texts_21() { return &___Key_texts_21; }
	inline void set_Key_texts_21(TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* value)
	{
		___Key_texts_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Key_texts_21), (void*)value);
	}

	inline static int32_t get_offset_of_suggestWords_22() { return static_cast<int32_t>(offsetof(PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6, ___suggestWords_22)); }
	inline SuggestWords_t98447E746D542CFBC29E31430CB5B96B92FEE357 * get_suggestWords_22() const { return ___suggestWords_22; }
	inline SuggestWords_t98447E746D542CFBC29E31430CB5B96B92FEE357 ** get_address_of_suggestWords_22() { return &___suggestWords_22; }
	inline void set_suggestWords_22(SuggestWords_t98447E746D542CFBC29E31430CB5B96B92FEE357 * value)
	{
		___suggestWords_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___suggestWords_22), (void*)value);
	}

	inline static int32_t get_offset_of_Keyboard_ani_23() { return static_cast<int32_t>(offsetof(PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6, ___Keyboard_ani_23)); }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * get_Keyboard_ani_23() const { return ___Keyboard_ani_23; }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 ** get_address_of_Keyboard_ani_23() { return &___Keyboard_ani_23; }
	inline void set_Keyboard_ani_23(Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * value)
	{
		___Keyboard_ani_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Keyboard_ani_23), (void*)value);
	}

	inline static int32_t get_offset_of_isKeyboardOn_24() { return static_cast<int32_t>(offsetof(PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6, ___isKeyboardOn_24)); }
	inline bool get_isKeyboardOn_24() const { return ___isKeyboardOn_24; }
	inline bool* get_address_of_isKeyboardOn_24() { return &___isKeyboardOn_24; }
	inline void set_isKeyboardOn_24(bool value)
	{
		___isKeyboardOn_24 = value;
	}

	inline static int32_t get_offset_of_EnteringField_Button_25() { return static_cast<int32_t>(offsetof(PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6, ___EnteringField_Button_25)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_EnteringField_Button_25() const { return ___EnteringField_Button_25; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_EnteringField_Button_25() { return &___EnteringField_Button_25; }
	inline void set_EnteringField_Button_25(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___EnteringField_Button_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnteringField_Button_25), (void*)value);
	}

	inline static int32_t get_offset_of_KeyboardField_obj_26() { return static_cast<int32_t>(offsetof(PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6, ___KeyboardField_obj_26)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_KeyboardField_obj_26() const { return ___KeyboardField_obj_26; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_KeyboardField_obj_26() { return &___KeyboardField_obj_26; }
	inline void set_KeyboardField_obj_26(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___KeyboardField_obj_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KeyboardField_obj_26), (void*)value);
	}

	inline static int32_t get_offset_of_Range_obj_27() { return static_cast<int32_t>(offsetof(PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6, ___Range_obj_27)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Range_obj_27() const { return ___Range_obj_27; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Range_obj_27() { return &___Range_obj_27; }
	inline void set_Range_obj_27(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Range_obj_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Range_obj_27), (void*)value);
	}

	inline static int32_t get_offset_of_EnteringField_obj_28() { return static_cast<int32_t>(offsetof(PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6, ___EnteringField_obj_28)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_EnteringField_obj_28() const { return ___EnteringField_obj_28; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_EnteringField_obj_28() { return &___EnteringField_obj_28; }
	inline void set_EnteringField_obj_28(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___EnteringField_obj_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnteringField_obj_28), (void*)value);
	}

	inline static int32_t get_offset_of_OutsideKatalk_obj_29() { return static_cast<int32_t>(offsetof(PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6, ___OutsideKatalk_obj_29)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_OutsideKatalk_obj_29() const { return ___OutsideKatalk_obj_29; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_OutsideKatalk_obj_29() { return &___OutsideKatalk_obj_29; }
	inline void set_OutsideKatalk_obj_29(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___OutsideKatalk_obj_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OutsideKatalk_obj_29), (void*)value);
	}

	inline static int32_t get_offset_of_BGM_as_30() { return static_cast<int32_t>(offsetof(PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6, ___BGM_as_30)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_BGM_as_30() const { return ___BGM_as_30; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_BGM_as_30() { return &___BGM_as_30; }
	inline void set_BGM_as_30(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___BGM_as_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BGM_as_30), (void*)value);
	}
};


// ResolutionSettings
struct  ResolutionSettings_t2E436EB43090A993B3D4AEDD39B8CBB007F954BE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.CanvasScaler ResolutionSettings::canvas
	CanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1 * ___canvas_4;
	// FloatingObjects[] ResolutionSettings::floatingObjects
	FloatingObjectsU5BU5D_tE08D869DDDBDF1528A77C479584B92124EBBE63D* ___floatingObjects_5;
	// FloatingTexts[] ResolutionSettings::floatingTexts
	FloatingTextsU5BU5D_tBBBD0A67FE3697C78F2FE6377035FECC46EB0A9D* ___floatingTexts_6;
	// System.Int32 ResolutionSettings::s_width
	int32_t ___s_width_7;
	// System.Int32 ResolutionSettings::s_height
	int32_t ___s_height_8;

public:
	inline static int32_t get_offset_of_canvas_4() { return static_cast<int32_t>(offsetof(ResolutionSettings_t2E436EB43090A993B3D4AEDD39B8CBB007F954BE, ___canvas_4)); }
	inline CanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1 * get_canvas_4() const { return ___canvas_4; }
	inline CanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1 ** get_address_of_canvas_4() { return &___canvas_4; }
	inline void set_canvas_4(CanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1 * value)
	{
		___canvas_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas_4), (void*)value);
	}

	inline static int32_t get_offset_of_floatingObjects_5() { return static_cast<int32_t>(offsetof(ResolutionSettings_t2E436EB43090A993B3D4AEDD39B8CBB007F954BE, ___floatingObjects_5)); }
	inline FloatingObjectsU5BU5D_tE08D869DDDBDF1528A77C479584B92124EBBE63D* get_floatingObjects_5() const { return ___floatingObjects_5; }
	inline FloatingObjectsU5BU5D_tE08D869DDDBDF1528A77C479584B92124EBBE63D** get_address_of_floatingObjects_5() { return &___floatingObjects_5; }
	inline void set_floatingObjects_5(FloatingObjectsU5BU5D_tE08D869DDDBDF1528A77C479584B92124EBBE63D* value)
	{
		___floatingObjects_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___floatingObjects_5), (void*)value);
	}

	inline static int32_t get_offset_of_floatingTexts_6() { return static_cast<int32_t>(offsetof(ResolutionSettings_t2E436EB43090A993B3D4AEDD39B8CBB007F954BE, ___floatingTexts_6)); }
	inline FloatingTextsU5BU5D_tBBBD0A67FE3697C78F2FE6377035FECC46EB0A9D* get_floatingTexts_6() const { return ___floatingTexts_6; }
	inline FloatingTextsU5BU5D_tBBBD0A67FE3697C78F2FE6377035FECC46EB0A9D** get_address_of_floatingTexts_6() { return &___floatingTexts_6; }
	inline void set_floatingTexts_6(FloatingTextsU5BU5D_tBBBD0A67FE3697C78F2FE6377035FECC46EB0A9D* value)
	{
		___floatingTexts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___floatingTexts_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_width_7() { return static_cast<int32_t>(offsetof(ResolutionSettings_t2E436EB43090A993B3D4AEDD39B8CBB007F954BE, ___s_width_7)); }
	inline int32_t get_s_width_7() const { return ___s_width_7; }
	inline int32_t* get_address_of_s_width_7() { return &___s_width_7; }
	inline void set_s_width_7(int32_t value)
	{
		___s_width_7 = value;
	}

	inline static int32_t get_offset_of_s_height_8() { return static_cast<int32_t>(offsetof(ResolutionSettings_t2E436EB43090A993B3D4AEDD39B8CBB007F954BE, ___s_height_8)); }
	inline int32_t get_s_height_8() const { return ___s_height_8; }
	inline int32_t* get_address_of_s_height_8() { return &___s_height_8; }
	inline void set_s_height_8(int32_t value)
	{
		___s_height_8 = value;
	}
};

struct ResolutionSettings_t2E436EB43090A993B3D4AEDD39B8CBB007F954BE_StaticFields
{
public:
	// System.Boolean ResolutionSettings::is18vs9
	bool ___is18vs9_9;

public:
	inline static int32_t get_offset_of_is18vs9_9() { return static_cast<int32_t>(offsetof(ResolutionSettings_t2E436EB43090A993B3D4AEDD39B8CBB007F954BE_StaticFields, ___is18vs9_9)); }
	inline bool get_is18vs9_9() const { return ___is18vs9_9; }
	inline bool* get_address_of_is18vs9_9() { return &___is18vs9_9; }
	inline void set_is18vs9_9(bool value)
	{
		___is18vs9_9 = value;
	}
};


// SliderColorMgr
struct  SliderColorMgr_t8690AB1B9F806F42AD0A9B9101BC259802451428  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Image SliderColorMgr::EnduranceBar_img
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___EnduranceBar_img_4;
	// UnityEngine.Color[] SliderColorMgr::BarColors
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___BarColors_5;
	// UnityEngine.GameObject SliderColorMgr::SleepyEffect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SleepyEffect_6;

public:
	inline static int32_t get_offset_of_EnduranceBar_img_4() { return static_cast<int32_t>(offsetof(SliderColorMgr_t8690AB1B9F806F42AD0A9B9101BC259802451428, ___EnduranceBar_img_4)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_EnduranceBar_img_4() const { return ___EnduranceBar_img_4; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_EnduranceBar_img_4() { return &___EnduranceBar_img_4; }
	inline void set_EnduranceBar_img_4(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___EnduranceBar_img_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnduranceBar_img_4), (void*)value);
	}

	inline static int32_t get_offset_of_BarColors_5() { return static_cast<int32_t>(offsetof(SliderColorMgr_t8690AB1B9F806F42AD0A9B9101BC259802451428, ___BarColors_5)); }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* get_BarColors_5() const { return ___BarColors_5; }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** get_address_of_BarColors_5() { return &___BarColors_5; }
	inline void set_BarColors_5(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* value)
	{
		___BarColors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BarColors_5), (void*)value);
	}

	inline static int32_t get_offset_of_SleepyEffect_6() { return static_cast<int32_t>(offsetof(SliderColorMgr_t8690AB1B9F806F42AD0A9B9101BC259802451428, ___SleepyEffect_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SleepyEffect_6() const { return ___SleepyEffect_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SleepyEffect_6() { return &___SleepyEffect_6; }
	inline void set_SleepyEffect_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SleepyEffect_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SleepyEffect_6), (void*)value);
	}
};


// TVButtonMgr
struct  TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Sprite[] TVButtonMgr::studentSprites
	SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* ___studentSprites_4;
	// UnityEngine.UI.Image TVButtonMgr::Student
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___Student_5;
	// UnityEngine.GameObject[] TVButtonMgr::OnXXX_Students
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___OnXXX_Students_6;
	// UnityEngine.Sprite TVButtonMgr::TvOFF_spt
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___TvOFF_spt_7;
	// UnityEngine.Sprite TVButtonMgr::TvON_spt
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___TvON_spt_8;
	// UnityEngine.UI.Image TVButtonMgr::TvDisplay_img
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___TvDisplay_img_9;
	// UnityEngine.GameObject TVButtonMgr::TvDisplay_obj
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TvDisplay_obj_10;
	// UnityEngine.UI.Text TVButtonMgr::ChannelSign_Text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___ChannelSign_Text_11;
	// UnityEngine.UI.Text TVButtonMgr::ChannelSign_RC_Text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___ChannelSign_RC_Text_12;
	// UnityEngine.GameObject TVButtonMgr::ChannelSign_BackImg
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ChannelSign_BackImg_13;
	// UnityEngine.GameObject TVButtonMgr::ChannelSign_RC
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ChannelSign_RC_14;
	// UnityEngine.GameObject TVButtonMgr::Light
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Light_15;
	// System.Int32 TVButtonMgr::TvChannel
	int32_t ___TvChannel_16;
	// System.Int32 TVButtonMgr::ChannelMax
	int32_t ___ChannelMax_17;
	// System.Boolean TVButtonMgr::isTvOn
	bool ___isTvOn_18;
	// System.Boolean TVButtonMgr::startgame
	bool ___startgame_19;
	// TvGameMgr TVButtonMgr::tvGameMgr
	TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * ___tvGameMgr_20;
	// TeacherMgr TVButtonMgr::teacherMgr
	TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E * ___teacherMgr_21;
	// TVGameDifficulty TVButtonMgr::tvGameDifficulty
	TVGameDifficulty_t1FF3D702593DD185CFB68A41A4DAA7616F14137B * ___tvGameDifficulty_22;
	// InGameMgr TVButtonMgr::inGameMgr
	InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 * ___inGameMgr_23;
	// TutorialMgr TVButtonMgr::tutorialMgr
	TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * ___tutorialMgr_24;
	// UnityEngine.GameObject TVButtonMgr::RemoteController
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___RemoteController_25;
	// System.Boolean TVButtonMgr::RCMove
	bool ___RCMove_26;
	// UnityEngine.GameObject TVButtonMgr::MoveMessage
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___MoveMessage_27;
	// UnityEngine.AudioSource TVButtonMgr::BGM_as
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___BGM_as_28;
	// System.Collections.IEnumerator TVButtonMgr::MessageErase_cor
	RuntimeObject* ___MessageErase_cor_29;

public:
	inline static int32_t get_offset_of_studentSprites_4() { return static_cast<int32_t>(offsetof(TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C, ___studentSprites_4)); }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* get_studentSprites_4() const { return ___studentSprites_4; }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77** get_address_of_studentSprites_4() { return &___studentSprites_4; }
	inline void set_studentSprites_4(SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* value)
	{
		___studentSprites_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___studentSprites_4), (void*)value);
	}

	inline static int32_t get_offset_of_Student_5() { return static_cast<int32_t>(offsetof(TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C, ___Student_5)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_Student_5() const { return ___Student_5; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_Student_5() { return &___Student_5; }
	inline void set_Student_5(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___Student_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Student_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnXXX_Students_6() { return static_cast<int32_t>(offsetof(TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C, ___OnXXX_Students_6)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_OnXXX_Students_6() const { return ___OnXXX_Students_6; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_OnXXX_Students_6() { return &___OnXXX_Students_6; }
	inline void set_OnXXX_Students_6(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___OnXXX_Students_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnXXX_Students_6), (void*)value);
	}

	inline static int32_t get_offset_of_TvOFF_spt_7() { return static_cast<int32_t>(offsetof(TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C, ___TvOFF_spt_7)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_TvOFF_spt_7() const { return ___TvOFF_spt_7; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_TvOFF_spt_7() { return &___TvOFF_spt_7; }
	inline void set_TvOFF_spt_7(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___TvOFF_spt_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TvOFF_spt_7), (void*)value);
	}

	inline static int32_t get_offset_of_TvON_spt_8() { return static_cast<int32_t>(offsetof(TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C, ___TvON_spt_8)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_TvON_spt_8() const { return ___TvON_spt_8; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_TvON_spt_8() { return &___TvON_spt_8; }
	inline void set_TvON_spt_8(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___TvON_spt_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TvON_spt_8), (void*)value);
	}

	inline static int32_t get_offset_of_TvDisplay_img_9() { return static_cast<int32_t>(offsetof(TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C, ___TvDisplay_img_9)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_TvDisplay_img_9() const { return ___TvDisplay_img_9; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_TvDisplay_img_9() { return &___TvDisplay_img_9; }
	inline void set_TvDisplay_img_9(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___TvDisplay_img_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TvDisplay_img_9), (void*)value);
	}

	inline static int32_t get_offset_of_TvDisplay_obj_10() { return static_cast<int32_t>(offsetof(TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C, ___TvDisplay_obj_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TvDisplay_obj_10() const { return ___TvDisplay_obj_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TvDisplay_obj_10() { return &___TvDisplay_obj_10; }
	inline void set_TvDisplay_obj_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TvDisplay_obj_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TvDisplay_obj_10), (void*)value);
	}

	inline static int32_t get_offset_of_ChannelSign_Text_11() { return static_cast<int32_t>(offsetof(TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C, ___ChannelSign_Text_11)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_ChannelSign_Text_11() const { return ___ChannelSign_Text_11; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_ChannelSign_Text_11() { return &___ChannelSign_Text_11; }
	inline void set_ChannelSign_Text_11(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___ChannelSign_Text_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ChannelSign_Text_11), (void*)value);
	}

	inline static int32_t get_offset_of_ChannelSign_RC_Text_12() { return static_cast<int32_t>(offsetof(TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C, ___ChannelSign_RC_Text_12)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_ChannelSign_RC_Text_12() const { return ___ChannelSign_RC_Text_12; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_ChannelSign_RC_Text_12() { return &___ChannelSign_RC_Text_12; }
	inline void set_ChannelSign_RC_Text_12(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___ChannelSign_RC_Text_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ChannelSign_RC_Text_12), (void*)value);
	}

	inline static int32_t get_offset_of_ChannelSign_BackImg_13() { return static_cast<int32_t>(offsetof(TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C, ___ChannelSign_BackImg_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ChannelSign_BackImg_13() const { return ___ChannelSign_BackImg_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ChannelSign_BackImg_13() { return &___ChannelSign_BackImg_13; }
	inline void set_ChannelSign_BackImg_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ChannelSign_BackImg_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ChannelSign_BackImg_13), (void*)value);
	}

	inline static int32_t get_offset_of_ChannelSign_RC_14() { return static_cast<int32_t>(offsetof(TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C, ___ChannelSign_RC_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ChannelSign_RC_14() const { return ___ChannelSign_RC_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ChannelSign_RC_14() { return &___ChannelSign_RC_14; }
	inline void set_ChannelSign_RC_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ChannelSign_RC_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ChannelSign_RC_14), (void*)value);
	}

	inline static int32_t get_offset_of_Light_15() { return static_cast<int32_t>(offsetof(TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C, ___Light_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Light_15() const { return ___Light_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Light_15() { return &___Light_15; }
	inline void set_Light_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Light_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Light_15), (void*)value);
	}

	inline static int32_t get_offset_of_TvChannel_16() { return static_cast<int32_t>(offsetof(TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C, ___TvChannel_16)); }
	inline int32_t get_TvChannel_16() const { return ___TvChannel_16; }
	inline int32_t* get_address_of_TvChannel_16() { return &___TvChannel_16; }
	inline void set_TvChannel_16(int32_t value)
	{
		___TvChannel_16 = value;
	}

	inline static int32_t get_offset_of_ChannelMax_17() { return static_cast<int32_t>(offsetof(TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C, ___ChannelMax_17)); }
	inline int32_t get_ChannelMax_17() const { return ___ChannelMax_17; }
	inline int32_t* get_address_of_ChannelMax_17() { return &___ChannelMax_17; }
	inline void set_ChannelMax_17(int32_t value)
	{
		___ChannelMax_17 = value;
	}

	inline static int32_t get_offset_of_isTvOn_18() { return static_cast<int32_t>(offsetof(TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C, ___isTvOn_18)); }
	inline bool get_isTvOn_18() const { return ___isTvOn_18; }
	inline bool* get_address_of_isTvOn_18() { return &___isTvOn_18; }
	inline void set_isTvOn_18(bool value)
	{
		___isTvOn_18 = value;
	}

	inline static int32_t get_offset_of_startgame_19() { return static_cast<int32_t>(offsetof(TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C, ___startgame_19)); }
	inline bool get_startgame_19() const { return ___startgame_19; }
	inline bool* get_address_of_startgame_19() { return &___startgame_19; }
	inline void set_startgame_19(bool value)
	{
		___startgame_19 = value;
	}

	inline static int32_t get_offset_of_tvGameMgr_20() { return static_cast<int32_t>(offsetof(TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C, ___tvGameMgr_20)); }
	inline TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * get_tvGameMgr_20() const { return ___tvGameMgr_20; }
	inline TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 ** get_address_of_tvGameMgr_20() { return &___tvGameMgr_20; }
	inline void set_tvGameMgr_20(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * value)
	{
		___tvGameMgr_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tvGameMgr_20), (void*)value);
	}

	inline static int32_t get_offset_of_teacherMgr_21() { return static_cast<int32_t>(offsetof(TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C, ___teacherMgr_21)); }
	inline TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E * get_teacherMgr_21() const { return ___teacherMgr_21; }
	inline TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E ** get_address_of_teacherMgr_21() { return &___teacherMgr_21; }
	inline void set_teacherMgr_21(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E * value)
	{
		___teacherMgr_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___teacherMgr_21), (void*)value);
	}

	inline static int32_t get_offset_of_tvGameDifficulty_22() { return static_cast<int32_t>(offsetof(TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C, ___tvGameDifficulty_22)); }
	inline TVGameDifficulty_t1FF3D702593DD185CFB68A41A4DAA7616F14137B * get_tvGameDifficulty_22() const { return ___tvGameDifficulty_22; }
	inline TVGameDifficulty_t1FF3D702593DD185CFB68A41A4DAA7616F14137B ** get_address_of_tvGameDifficulty_22() { return &___tvGameDifficulty_22; }
	inline void set_tvGameDifficulty_22(TVGameDifficulty_t1FF3D702593DD185CFB68A41A4DAA7616F14137B * value)
	{
		___tvGameDifficulty_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tvGameDifficulty_22), (void*)value);
	}

	inline static int32_t get_offset_of_inGameMgr_23() { return static_cast<int32_t>(offsetof(TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C, ___inGameMgr_23)); }
	inline InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 * get_inGameMgr_23() const { return ___inGameMgr_23; }
	inline InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 ** get_address_of_inGameMgr_23() { return &___inGameMgr_23; }
	inline void set_inGameMgr_23(InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 * value)
	{
		___inGameMgr_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inGameMgr_23), (void*)value);
	}

	inline static int32_t get_offset_of_tutorialMgr_24() { return static_cast<int32_t>(offsetof(TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C, ___tutorialMgr_24)); }
	inline TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * get_tutorialMgr_24() const { return ___tutorialMgr_24; }
	inline TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD ** get_address_of_tutorialMgr_24() { return &___tutorialMgr_24; }
	inline void set_tutorialMgr_24(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * value)
	{
		___tutorialMgr_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tutorialMgr_24), (void*)value);
	}

	inline static int32_t get_offset_of_RemoteController_25() { return static_cast<int32_t>(offsetof(TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C, ___RemoteController_25)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_RemoteController_25() const { return ___RemoteController_25; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_RemoteController_25() { return &___RemoteController_25; }
	inline void set_RemoteController_25(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___RemoteController_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RemoteController_25), (void*)value);
	}

	inline static int32_t get_offset_of_RCMove_26() { return static_cast<int32_t>(offsetof(TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C, ___RCMove_26)); }
	inline bool get_RCMove_26() const { return ___RCMove_26; }
	inline bool* get_address_of_RCMove_26() { return &___RCMove_26; }
	inline void set_RCMove_26(bool value)
	{
		___RCMove_26 = value;
	}

	inline static int32_t get_offset_of_MoveMessage_27() { return static_cast<int32_t>(offsetof(TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C, ___MoveMessage_27)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_MoveMessage_27() const { return ___MoveMessage_27; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_MoveMessage_27() { return &___MoveMessage_27; }
	inline void set_MoveMessage_27(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___MoveMessage_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MoveMessage_27), (void*)value);
	}

	inline static int32_t get_offset_of_BGM_as_28() { return static_cast<int32_t>(offsetof(TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C, ___BGM_as_28)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_BGM_as_28() const { return ___BGM_as_28; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_BGM_as_28() { return &___BGM_as_28; }
	inline void set_BGM_as_28(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___BGM_as_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BGM_as_28), (void*)value);
	}

	inline static int32_t get_offset_of_MessageErase_cor_29() { return static_cast<int32_t>(offsetof(TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C, ___MessageErase_cor_29)); }
	inline RuntimeObject* get_MessageErase_cor_29() const { return ___MessageErase_cor_29; }
	inline RuntimeObject** get_address_of_MessageErase_cor_29() { return &___MessageErase_cor_29; }
	inline void set_MessageErase_cor_29(RuntimeObject* value)
	{
		___MessageErase_cor_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageErase_cor_29), (void*)value);
	}
};


// TeacherMgr
struct  TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject TeacherMgr::Teacher
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Teacher_4;
	// UnityEngine.UI.Image TeacherMgr::Teacher_img
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___Teacher_img_5;
	// UnityEngine.Color TeacherMgr::Green
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___Green_6;
	// UnityEngine.Color TeacherMgr::Red
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___Red_7;
	// UnityEngine.Color TeacherMgr::Orange
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___Orange_8;
	// UnityEngine.AudioSource TeacherMgr::GameOver_Effect_as
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___GameOver_Effect_as_9;
	// UnityEngine.AudioSource TeacherMgr::SuspectingSound_AS
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___SuspectingSound_AS_10;
	// UnityEngine.AudioSource TeacherMgr::WritingSound_AS
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___WritingSound_AS_11;
	// UnityEngine.AudioClip[] TeacherMgr::WritingSoundClips
	AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ___WritingSoundClips_12;
	// UnityEngine.GameObject[] TeacherMgr::Teacher_condition
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___Teacher_condition_13;
	// UnityEngine.UI.Image TeacherMgr::OrangeCon_img
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___OrangeCon_img_14;
	// UnityEngine.Sprite[] TeacherMgr::TOrange_sprite
	SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* ___TOrange_sprite_15;
	// UnityEngine.GameObject TeacherMgr::NormalCon
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___NormalCon_16;
	// UnityEngine.GameObject TeacherMgr::ItemCon
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ItemCon_17;
	// UnityEngine.GameObject TeacherMgr::GameOverCon
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GameOverCon_18;
	// UnityEngine.GameObject TeacherMgr::GameOverByContent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GameOverByContent_19;
	// UnityEngine.GameObject TeacherMgr::GameOverBySleep
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GameOverBySleep_20;
	// UnityEngine.Animation TeacherMgr::GameOverByContent_ani
	Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * ___GameOverByContent_ani_21;
	// UnityEngine.Animation TeacherMgr::GameOverBySleep_ani
	Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * ___GameOverBySleep_ani_22;
	// TVButtonMgr TeacherMgr::tvButtonMgr
	TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C * ___tvButtonMgr_23;
	// InGameMgr TeacherMgr::inGameMgr
	InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 * ___inGameMgr_24;
	// TvGameMgr TeacherMgr::tvGameMgr
	TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * ___tvGameMgr_25;
	// DataManager TeacherMgr::dataMgr
	DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * ___dataMgr_26;
	// LevelMgr TeacherMgr::levelMgr
	LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503 * ___levelMgr_27;
	// PhoneConMgr TeacherMgr::phoneConMgr
	PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6 * ___phoneConMgr_28;
	// KatalkGameMgr TeacherMgr::katalkGameMgr
	KatalkGameMgr_tFC6829AF28819804C713254F0B5B96BBE4147776 * ___katalkGameMgr_29;
	// SnackGameMgr TeacherMgr::snackGameMgr
	SnackGameMgr_t753894511F69E7A4EB2E5AA5EAFFED1B63684081 * ___snackGameMgr_30;
	// DifficultyData TeacherMgr::difficultyData
	DifficultyData_tB1A89BA060411BADB493F4CAA1D05880D1F2C4F2 * ___difficultyData_31;
	// CoinMgr TeacherMgr::coinMgr
	CoinMgr_tD1020715095479E870A6900CD7EB3FEB6799CF50 * ___coinMgr_32;
	// TutorialMgr TeacherMgr::tutorialMgr
	TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * ___tutorialMgr_33;
	// Option TeacherMgr::option
	Option_t4668F0CFD50CE7253A226099157E10033328C0E7 * ___option_34;
	// SliderColorMgr TeacherMgr::endurColorMgr
	SliderColorMgr_t8690AB1B9F806F42AD0A9B9101BC259802451428 * ___endurColorMgr_35;
	// AdManager TeacherMgr::adManager
	AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * ___adManager_36;
	// ItemMgr TeacherMgr::itemMgr
	ItemMgr_t7E210A71B7FC2B9D76B7FD54A59ACE50E5A33D85 * ___itemMgr_37;
	// System.Boolean TeacherMgr::TestMode
	bool ___TestMode_38;
	// System.Int32 TeacherMgr::numOfPlay
	int32_t ___numOfPlay_39;
	// System.Boolean TeacherMgr::isTeacherFront
	bool ___isTeacherFront_40;
	// System.Int32 TeacherMgr::teacherNotice
	int32_t ___teacherNotice_41;
	// System.Int32 TeacherMgr::teacherNoticeMax
	int32_t ___teacherNoticeMax_42;
	// System.Boolean TeacherMgr::firstNotice
	bool ___firstNotice_43;
	// System.Int32 TeacherMgr::noticeStep
	int32_t ___noticeStep_44;
	// UnityEngine.UI.Text TeacherMgr::testmodeButton_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___testmodeButton_text_45;

public:
	inline static int32_t get_offset_of_Teacher_4() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___Teacher_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Teacher_4() const { return ___Teacher_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Teacher_4() { return &___Teacher_4; }
	inline void set_Teacher_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Teacher_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Teacher_4), (void*)value);
	}

	inline static int32_t get_offset_of_Teacher_img_5() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___Teacher_img_5)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_Teacher_img_5() const { return ___Teacher_img_5; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_Teacher_img_5() { return &___Teacher_img_5; }
	inline void set_Teacher_img_5(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___Teacher_img_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Teacher_img_5), (void*)value);
	}

	inline static int32_t get_offset_of_Green_6() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___Green_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_Green_6() const { return ___Green_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_Green_6() { return &___Green_6; }
	inline void set_Green_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___Green_6 = value;
	}

	inline static int32_t get_offset_of_Red_7() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___Red_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_Red_7() const { return ___Red_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_Red_7() { return &___Red_7; }
	inline void set_Red_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___Red_7 = value;
	}

	inline static int32_t get_offset_of_Orange_8() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___Orange_8)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_Orange_8() const { return ___Orange_8; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_Orange_8() { return &___Orange_8; }
	inline void set_Orange_8(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___Orange_8 = value;
	}

	inline static int32_t get_offset_of_GameOver_Effect_as_9() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___GameOver_Effect_as_9)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_GameOver_Effect_as_9() const { return ___GameOver_Effect_as_9; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_GameOver_Effect_as_9() { return &___GameOver_Effect_as_9; }
	inline void set_GameOver_Effect_as_9(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___GameOver_Effect_as_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameOver_Effect_as_9), (void*)value);
	}

	inline static int32_t get_offset_of_SuspectingSound_AS_10() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___SuspectingSound_AS_10)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_SuspectingSound_AS_10() const { return ___SuspectingSound_AS_10; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_SuspectingSound_AS_10() { return &___SuspectingSound_AS_10; }
	inline void set_SuspectingSound_AS_10(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___SuspectingSound_AS_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SuspectingSound_AS_10), (void*)value);
	}

	inline static int32_t get_offset_of_WritingSound_AS_11() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___WritingSound_AS_11)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_WritingSound_AS_11() const { return ___WritingSound_AS_11; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_WritingSound_AS_11() { return &___WritingSound_AS_11; }
	inline void set_WritingSound_AS_11(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___WritingSound_AS_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WritingSound_AS_11), (void*)value);
	}

	inline static int32_t get_offset_of_WritingSoundClips_12() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___WritingSoundClips_12)); }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* get_WritingSoundClips_12() const { return ___WritingSoundClips_12; }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE** get_address_of_WritingSoundClips_12() { return &___WritingSoundClips_12; }
	inline void set_WritingSoundClips_12(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* value)
	{
		___WritingSoundClips_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WritingSoundClips_12), (void*)value);
	}

	inline static int32_t get_offset_of_Teacher_condition_13() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___Teacher_condition_13)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_Teacher_condition_13() const { return ___Teacher_condition_13; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_Teacher_condition_13() { return &___Teacher_condition_13; }
	inline void set_Teacher_condition_13(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___Teacher_condition_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Teacher_condition_13), (void*)value);
	}

	inline static int32_t get_offset_of_OrangeCon_img_14() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___OrangeCon_img_14)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_OrangeCon_img_14() const { return ___OrangeCon_img_14; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_OrangeCon_img_14() { return &___OrangeCon_img_14; }
	inline void set_OrangeCon_img_14(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___OrangeCon_img_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OrangeCon_img_14), (void*)value);
	}

	inline static int32_t get_offset_of_TOrange_sprite_15() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___TOrange_sprite_15)); }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* get_TOrange_sprite_15() const { return ___TOrange_sprite_15; }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77** get_address_of_TOrange_sprite_15() { return &___TOrange_sprite_15; }
	inline void set_TOrange_sprite_15(SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* value)
	{
		___TOrange_sprite_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TOrange_sprite_15), (void*)value);
	}

	inline static int32_t get_offset_of_NormalCon_16() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___NormalCon_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_NormalCon_16() const { return ___NormalCon_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_NormalCon_16() { return &___NormalCon_16; }
	inline void set_NormalCon_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___NormalCon_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NormalCon_16), (void*)value);
	}

	inline static int32_t get_offset_of_ItemCon_17() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___ItemCon_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ItemCon_17() const { return ___ItemCon_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ItemCon_17() { return &___ItemCon_17; }
	inline void set_ItemCon_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ItemCon_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ItemCon_17), (void*)value);
	}

	inline static int32_t get_offset_of_GameOverCon_18() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___GameOverCon_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_GameOverCon_18() const { return ___GameOverCon_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_GameOverCon_18() { return &___GameOverCon_18; }
	inline void set_GameOverCon_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___GameOverCon_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameOverCon_18), (void*)value);
	}

	inline static int32_t get_offset_of_GameOverByContent_19() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___GameOverByContent_19)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_GameOverByContent_19() const { return ___GameOverByContent_19; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_GameOverByContent_19() { return &___GameOverByContent_19; }
	inline void set_GameOverByContent_19(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___GameOverByContent_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameOverByContent_19), (void*)value);
	}

	inline static int32_t get_offset_of_GameOverBySleep_20() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___GameOverBySleep_20)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_GameOverBySleep_20() const { return ___GameOverBySleep_20; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_GameOverBySleep_20() { return &___GameOverBySleep_20; }
	inline void set_GameOverBySleep_20(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___GameOverBySleep_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameOverBySleep_20), (void*)value);
	}

	inline static int32_t get_offset_of_GameOverByContent_ani_21() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___GameOverByContent_ani_21)); }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * get_GameOverByContent_ani_21() const { return ___GameOverByContent_ani_21; }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 ** get_address_of_GameOverByContent_ani_21() { return &___GameOverByContent_ani_21; }
	inline void set_GameOverByContent_ani_21(Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * value)
	{
		___GameOverByContent_ani_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameOverByContent_ani_21), (void*)value);
	}

	inline static int32_t get_offset_of_GameOverBySleep_ani_22() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___GameOverBySleep_ani_22)); }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * get_GameOverBySleep_ani_22() const { return ___GameOverBySleep_ani_22; }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 ** get_address_of_GameOverBySleep_ani_22() { return &___GameOverBySleep_ani_22; }
	inline void set_GameOverBySleep_ani_22(Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * value)
	{
		___GameOverBySleep_ani_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameOverBySleep_ani_22), (void*)value);
	}

	inline static int32_t get_offset_of_tvButtonMgr_23() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___tvButtonMgr_23)); }
	inline TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C * get_tvButtonMgr_23() const { return ___tvButtonMgr_23; }
	inline TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C ** get_address_of_tvButtonMgr_23() { return &___tvButtonMgr_23; }
	inline void set_tvButtonMgr_23(TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C * value)
	{
		___tvButtonMgr_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tvButtonMgr_23), (void*)value);
	}

	inline static int32_t get_offset_of_inGameMgr_24() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___inGameMgr_24)); }
	inline InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 * get_inGameMgr_24() const { return ___inGameMgr_24; }
	inline InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 ** get_address_of_inGameMgr_24() { return &___inGameMgr_24; }
	inline void set_inGameMgr_24(InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 * value)
	{
		___inGameMgr_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inGameMgr_24), (void*)value);
	}

	inline static int32_t get_offset_of_tvGameMgr_25() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___tvGameMgr_25)); }
	inline TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * get_tvGameMgr_25() const { return ___tvGameMgr_25; }
	inline TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 ** get_address_of_tvGameMgr_25() { return &___tvGameMgr_25; }
	inline void set_tvGameMgr_25(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * value)
	{
		___tvGameMgr_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tvGameMgr_25), (void*)value);
	}

	inline static int32_t get_offset_of_dataMgr_26() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___dataMgr_26)); }
	inline DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * get_dataMgr_26() const { return ___dataMgr_26; }
	inline DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 ** get_address_of_dataMgr_26() { return &___dataMgr_26; }
	inline void set_dataMgr_26(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * value)
	{
		___dataMgr_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataMgr_26), (void*)value);
	}

	inline static int32_t get_offset_of_levelMgr_27() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___levelMgr_27)); }
	inline LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503 * get_levelMgr_27() const { return ___levelMgr_27; }
	inline LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503 ** get_address_of_levelMgr_27() { return &___levelMgr_27; }
	inline void set_levelMgr_27(LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503 * value)
	{
		___levelMgr_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelMgr_27), (void*)value);
	}

	inline static int32_t get_offset_of_phoneConMgr_28() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___phoneConMgr_28)); }
	inline PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6 * get_phoneConMgr_28() const { return ___phoneConMgr_28; }
	inline PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6 ** get_address_of_phoneConMgr_28() { return &___phoneConMgr_28; }
	inline void set_phoneConMgr_28(PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6 * value)
	{
		___phoneConMgr_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___phoneConMgr_28), (void*)value);
	}

	inline static int32_t get_offset_of_katalkGameMgr_29() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___katalkGameMgr_29)); }
	inline KatalkGameMgr_tFC6829AF28819804C713254F0B5B96BBE4147776 * get_katalkGameMgr_29() const { return ___katalkGameMgr_29; }
	inline KatalkGameMgr_tFC6829AF28819804C713254F0B5B96BBE4147776 ** get_address_of_katalkGameMgr_29() { return &___katalkGameMgr_29; }
	inline void set_katalkGameMgr_29(KatalkGameMgr_tFC6829AF28819804C713254F0B5B96BBE4147776 * value)
	{
		___katalkGameMgr_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___katalkGameMgr_29), (void*)value);
	}

	inline static int32_t get_offset_of_snackGameMgr_30() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___snackGameMgr_30)); }
	inline SnackGameMgr_t753894511F69E7A4EB2E5AA5EAFFED1B63684081 * get_snackGameMgr_30() const { return ___snackGameMgr_30; }
	inline SnackGameMgr_t753894511F69E7A4EB2E5AA5EAFFED1B63684081 ** get_address_of_snackGameMgr_30() { return &___snackGameMgr_30; }
	inline void set_snackGameMgr_30(SnackGameMgr_t753894511F69E7A4EB2E5AA5EAFFED1B63684081 * value)
	{
		___snackGameMgr_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___snackGameMgr_30), (void*)value);
	}

	inline static int32_t get_offset_of_difficultyData_31() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___difficultyData_31)); }
	inline DifficultyData_tB1A89BA060411BADB493F4CAA1D05880D1F2C4F2 * get_difficultyData_31() const { return ___difficultyData_31; }
	inline DifficultyData_tB1A89BA060411BADB493F4CAA1D05880D1F2C4F2 ** get_address_of_difficultyData_31() { return &___difficultyData_31; }
	inline void set_difficultyData_31(DifficultyData_tB1A89BA060411BADB493F4CAA1D05880D1F2C4F2 * value)
	{
		___difficultyData_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___difficultyData_31), (void*)value);
	}

	inline static int32_t get_offset_of_coinMgr_32() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___coinMgr_32)); }
	inline CoinMgr_tD1020715095479E870A6900CD7EB3FEB6799CF50 * get_coinMgr_32() const { return ___coinMgr_32; }
	inline CoinMgr_tD1020715095479E870A6900CD7EB3FEB6799CF50 ** get_address_of_coinMgr_32() { return &___coinMgr_32; }
	inline void set_coinMgr_32(CoinMgr_tD1020715095479E870A6900CD7EB3FEB6799CF50 * value)
	{
		___coinMgr_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coinMgr_32), (void*)value);
	}

	inline static int32_t get_offset_of_tutorialMgr_33() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___tutorialMgr_33)); }
	inline TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * get_tutorialMgr_33() const { return ___tutorialMgr_33; }
	inline TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD ** get_address_of_tutorialMgr_33() { return &___tutorialMgr_33; }
	inline void set_tutorialMgr_33(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * value)
	{
		___tutorialMgr_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tutorialMgr_33), (void*)value);
	}

	inline static int32_t get_offset_of_option_34() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___option_34)); }
	inline Option_t4668F0CFD50CE7253A226099157E10033328C0E7 * get_option_34() const { return ___option_34; }
	inline Option_t4668F0CFD50CE7253A226099157E10033328C0E7 ** get_address_of_option_34() { return &___option_34; }
	inline void set_option_34(Option_t4668F0CFD50CE7253A226099157E10033328C0E7 * value)
	{
		___option_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___option_34), (void*)value);
	}

	inline static int32_t get_offset_of_endurColorMgr_35() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___endurColorMgr_35)); }
	inline SliderColorMgr_t8690AB1B9F806F42AD0A9B9101BC259802451428 * get_endurColorMgr_35() const { return ___endurColorMgr_35; }
	inline SliderColorMgr_t8690AB1B9F806F42AD0A9B9101BC259802451428 ** get_address_of_endurColorMgr_35() { return &___endurColorMgr_35; }
	inline void set_endurColorMgr_35(SliderColorMgr_t8690AB1B9F806F42AD0A9B9101BC259802451428 * value)
	{
		___endurColorMgr_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endurColorMgr_35), (void*)value);
	}

	inline static int32_t get_offset_of_adManager_36() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___adManager_36)); }
	inline AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * get_adManager_36() const { return ___adManager_36; }
	inline AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 ** get_address_of_adManager_36() { return &___adManager_36; }
	inline void set_adManager_36(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * value)
	{
		___adManager_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adManager_36), (void*)value);
	}

	inline static int32_t get_offset_of_itemMgr_37() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___itemMgr_37)); }
	inline ItemMgr_t7E210A71B7FC2B9D76B7FD54A59ACE50E5A33D85 * get_itemMgr_37() const { return ___itemMgr_37; }
	inline ItemMgr_t7E210A71B7FC2B9D76B7FD54A59ACE50E5A33D85 ** get_address_of_itemMgr_37() { return &___itemMgr_37; }
	inline void set_itemMgr_37(ItemMgr_t7E210A71B7FC2B9D76B7FD54A59ACE50E5A33D85 * value)
	{
		___itemMgr_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemMgr_37), (void*)value);
	}

	inline static int32_t get_offset_of_TestMode_38() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___TestMode_38)); }
	inline bool get_TestMode_38() const { return ___TestMode_38; }
	inline bool* get_address_of_TestMode_38() { return &___TestMode_38; }
	inline void set_TestMode_38(bool value)
	{
		___TestMode_38 = value;
	}

	inline static int32_t get_offset_of_numOfPlay_39() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___numOfPlay_39)); }
	inline int32_t get_numOfPlay_39() const { return ___numOfPlay_39; }
	inline int32_t* get_address_of_numOfPlay_39() { return &___numOfPlay_39; }
	inline void set_numOfPlay_39(int32_t value)
	{
		___numOfPlay_39 = value;
	}

	inline static int32_t get_offset_of_isTeacherFront_40() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___isTeacherFront_40)); }
	inline bool get_isTeacherFront_40() const { return ___isTeacherFront_40; }
	inline bool* get_address_of_isTeacherFront_40() { return &___isTeacherFront_40; }
	inline void set_isTeacherFront_40(bool value)
	{
		___isTeacherFront_40 = value;
	}

	inline static int32_t get_offset_of_teacherNotice_41() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___teacherNotice_41)); }
	inline int32_t get_teacherNotice_41() const { return ___teacherNotice_41; }
	inline int32_t* get_address_of_teacherNotice_41() { return &___teacherNotice_41; }
	inline void set_teacherNotice_41(int32_t value)
	{
		___teacherNotice_41 = value;
	}

	inline static int32_t get_offset_of_teacherNoticeMax_42() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___teacherNoticeMax_42)); }
	inline int32_t get_teacherNoticeMax_42() const { return ___teacherNoticeMax_42; }
	inline int32_t* get_address_of_teacherNoticeMax_42() { return &___teacherNoticeMax_42; }
	inline void set_teacherNoticeMax_42(int32_t value)
	{
		___teacherNoticeMax_42 = value;
	}

	inline static int32_t get_offset_of_firstNotice_43() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___firstNotice_43)); }
	inline bool get_firstNotice_43() const { return ___firstNotice_43; }
	inline bool* get_address_of_firstNotice_43() { return &___firstNotice_43; }
	inline void set_firstNotice_43(bool value)
	{
		___firstNotice_43 = value;
	}

	inline static int32_t get_offset_of_noticeStep_44() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___noticeStep_44)); }
	inline int32_t get_noticeStep_44() const { return ___noticeStep_44; }
	inline int32_t* get_address_of_noticeStep_44() { return &___noticeStep_44; }
	inline void set_noticeStep_44(int32_t value)
	{
		___noticeStep_44 = value;
	}

	inline static int32_t get_offset_of_testmodeButton_text_45() { return static_cast<int32_t>(offsetof(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E, ___testmodeButton_text_45)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_testmodeButton_text_45() const { return ___testmodeButton_text_45; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_testmodeButton_text_45() { return &___testmodeButton_text_45; }
	inline void set_testmodeButton_text_45(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___testmodeButton_text_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___testmodeButton_text_45), (void*)value);
	}
};


// TicketMgr
struct  TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// ItemMgr TicketMgr::itemMgr
	ItemMgr_t7E210A71B7FC2B9D76B7FD54A59ACE50E5A33D85 * ___itemMgr_4;
	// MainSceneMgr TicketMgr::mainSceneMgr
	MainSceneMgr_t343ABFBEB84190D4CB9232C310D5ADD6CC0E5117 * ___mainSceneMgr_5;
	// InGameMgr TicketMgr::inGameMgr
	InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 * ___inGameMgr_6;
	// DataManager TicketMgr::dataManager
	DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * ___dataManager_7;
	// System.Int32 TicketMgr::RandomItemTicket_amount
	int32_t ___RandomItemTicket_amount_8;
	// UnityEngine.GameObject TicketMgr::RandomItem_Menu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___RandomItem_Menu_9;
	// UnityEngine.UI.Button TicketMgr::OpenRT_button
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___OpenRT_button_10;
	// UnityEngine.GameObject TicketMgr::Reset_button
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Reset_button_11;
	// UnityEngine.GameObject TicketMgr::LightEffect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___LightEffect_12;
	// UnityEngine.Animation TicketMgr::RandomItem_MenuAni
	Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * ___RandomItem_MenuAni_13;
	// UnityEngine.Animation TicketMgr::OpenRandomItem_ani
	Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * ___OpenRandomItem_ani_14;
	// UnityEngine.Animation TicketMgr::ItemAppear_ani
	Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * ___ItemAppear_ani_15;
	// UnityEngine.Animation TicketMgr::ItemNameAppear_ani
	Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * ___ItemNameAppear_ani_16;
	// UnityEngine.AudioSource TicketMgr::RandomTicket_AS
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___RandomTicket_AS_17;
	// UnityEngine.UI.Image TicketMgr::RandomResult_img
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___RandomResult_img_18;
	// UnityEngine.UI.Text TicketMgr::ItemNameResult_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___ItemNameResult_text_19;
	// UnityEngine.UI.Text TicketMgr::numOfRT_Text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___numOfRT_Text_20;
	// UnityEngine.Color TicketMgr::HighItem_color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___HighItem_color_21;
	// UnityEngine.Color TicketMgr::Normal_color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___Normal_color_22;
	// System.Int32 TicketMgr::NormalItemTicket_amount
	int32_t ___NormalItemTicket_amount_23;
	// UnityEngine.UI.Text[] TicketMgr::numOfNI_texts
	TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* ___numOfNI_texts_24;
	// System.Int32 TicketMgr::HighRankItemTicket_amount
	int32_t ___HighRankItemTicket_amount_25;
	// UnityEngine.UI.Text[] TicketMgr::numOfHI_texts
	TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* ___numOfHI_texts_26;
	// UnityEngine.AudioSource TicketMgr::TicketExchange_AS
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___TicketExchange_AS_27;
	// UnityEngine.GameObject TicketMgr::rankTicket_Menu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___rankTicket_Menu_28;
	// UnityEngine.Animation TicketMgr::rankTicket_MenuAni
	Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * ___rankTicket_MenuAni_29;
	// UnityEngine.UI.Image TicketMgr::SelectedItem_img
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___SelectedItem_img_30;
	// UnityEngine.UI.Text TicketMgr::RankItemName_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___RankItemName_text_31;
	// UnityEngine.GameObject TicketMgr::NormalTicket_Menu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___NormalTicket_Menu_32;
	// UnityEngine.GameObject TicketMgr::HighTicket_Menu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___HighTicket_Menu_33;
	// UnityEngine.GameObject TicketMgr::SelectedItemCheck_Menu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SelectedItemCheck_Menu_34;
	// System.Boolean TicketMgr::soundPrinted
	bool ___soundPrinted_35;
	// System.Boolean TicketMgr::confirmed
	bool ___confirmed_36;
	// System.Boolean TicketMgr::isnormal
	bool ___isnormal_37;
	// System.Int32 TicketMgr::kind_item
	int32_t ___kind_item_38;

public:
	inline static int32_t get_offset_of_itemMgr_4() { return static_cast<int32_t>(offsetof(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2, ___itemMgr_4)); }
	inline ItemMgr_t7E210A71B7FC2B9D76B7FD54A59ACE50E5A33D85 * get_itemMgr_4() const { return ___itemMgr_4; }
	inline ItemMgr_t7E210A71B7FC2B9D76B7FD54A59ACE50E5A33D85 ** get_address_of_itemMgr_4() { return &___itemMgr_4; }
	inline void set_itemMgr_4(ItemMgr_t7E210A71B7FC2B9D76B7FD54A59ACE50E5A33D85 * value)
	{
		___itemMgr_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemMgr_4), (void*)value);
	}

	inline static int32_t get_offset_of_mainSceneMgr_5() { return static_cast<int32_t>(offsetof(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2, ___mainSceneMgr_5)); }
	inline MainSceneMgr_t343ABFBEB84190D4CB9232C310D5ADD6CC0E5117 * get_mainSceneMgr_5() const { return ___mainSceneMgr_5; }
	inline MainSceneMgr_t343ABFBEB84190D4CB9232C310D5ADD6CC0E5117 ** get_address_of_mainSceneMgr_5() { return &___mainSceneMgr_5; }
	inline void set_mainSceneMgr_5(MainSceneMgr_t343ABFBEB84190D4CB9232C310D5ADD6CC0E5117 * value)
	{
		___mainSceneMgr_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainSceneMgr_5), (void*)value);
	}

	inline static int32_t get_offset_of_inGameMgr_6() { return static_cast<int32_t>(offsetof(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2, ___inGameMgr_6)); }
	inline InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 * get_inGameMgr_6() const { return ___inGameMgr_6; }
	inline InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 ** get_address_of_inGameMgr_6() { return &___inGameMgr_6; }
	inline void set_inGameMgr_6(InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 * value)
	{
		___inGameMgr_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inGameMgr_6), (void*)value);
	}

	inline static int32_t get_offset_of_dataManager_7() { return static_cast<int32_t>(offsetof(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2, ___dataManager_7)); }
	inline DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * get_dataManager_7() const { return ___dataManager_7; }
	inline DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 ** get_address_of_dataManager_7() { return &___dataManager_7; }
	inline void set_dataManager_7(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * value)
	{
		___dataManager_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataManager_7), (void*)value);
	}

	inline static int32_t get_offset_of_RandomItemTicket_amount_8() { return static_cast<int32_t>(offsetof(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2, ___RandomItemTicket_amount_8)); }
	inline int32_t get_RandomItemTicket_amount_8() const { return ___RandomItemTicket_amount_8; }
	inline int32_t* get_address_of_RandomItemTicket_amount_8() { return &___RandomItemTicket_amount_8; }
	inline void set_RandomItemTicket_amount_8(int32_t value)
	{
		___RandomItemTicket_amount_8 = value;
	}

	inline static int32_t get_offset_of_RandomItem_Menu_9() { return static_cast<int32_t>(offsetof(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2, ___RandomItem_Menu_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_RandomItem_Menu_9() const { return ___RandomItem_Menu_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_RandomItem_Menu_9() { return &___RandomItem_Menu_9; }
	inline void set_RandomItem_Menu_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___RandomItem_Menu_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RandomItem_Menu_9), (void*)value);
	}

	inline static int32_t get_offset_of_OpenRT_button_10() { return static_cast<int32_t>(offsetof(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2, ___OpenRT_button_10)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_OpenRT_button_10() const { return ___OpenRT_button_10; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_OpenRT_button_10() { return &___OpenRT_button_10; }
	inline void set_OpenRT_button_10(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___OpenRT_button_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OpenRT_button_10), (void*)value);
	}

	inline static int32_t get_offset_of_Reset_button_11() { return static_cast<int32_t>(offsetof(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2, ___Reset_button_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Reset_button_11() const { return ___Reset_button_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Reset_button_11() { return &___Reset_button_11; }
	inline void set_Reset_button_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Reset_button_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Reset_button_11), (void*)value);
	}

	inline static int32_t get_offset_of_LightEffect_12() { return static_cast<int32_t>(offsetof(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2, ___LightEffect_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_LightEffect_12() const { return ___LightEffect_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_LightEffect_12() { return &___LightEffect_12; }
	inline void set_LightEffect_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___LightEffect_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LightEffect_12), (void*)value);
	}

	inline static int32_t get_offset_of_RandomItem_MenuAni_13() { return static_cast<int32_t>(offsetof(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2, ___RandomItem_MenuAni_13)); }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * get_RandomItem_MenuAni_13() const { return ___RandomItem_MenuAni_13; }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 ** get_address_of_RandomItem_MenuAni_13() { return &___RandomItem_MenuAni_13; }
	inline void set_RandomItem_MenuAni_13(Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * value)
	{
		___RandomItem_MenuAni_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RandomItem_MenuAni_13), (void*)value);
	}

	inline static int32_t get_offset_of_OpenRandomItem_ani_14() { return static_cast<int32_t>(offsetof(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2, ___OpenRandomItem_ani_14)); }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * get_OpenRandomItem_ani_14() const { return ___OpenRandomItem_ani_14; }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 ** get_address_of_OpenRandomItem_ani_14() { return &___OpenRandomItem_ani_14; }
	inline void set_OpenRandomItem_ani_14(Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * value)
	{
		___OpenRandomItem_ani_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OpenRandomItem_ani_14), (void*)value);
	}

	inline static int32_t get_offset_of_ItemAppear_ani_15() { return static_cast<int32_t>(offsetof(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2, ___ItemAppear_ani_15)); }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * get_ItemAppear_ani_15() const { return ___ItemAppear_ani_15; }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 ** get_address_of_ItemAppear_ani_15() { return &___ItemAppear_ani_15; }
	inline void set_ItemAppear_ani_15(Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * value)
	{
		___ItemAppear_ani_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ItemAppear_ani_15), (void*)value);
	}

	inline static int32_t get_offset_of_ItemNameAppear_ani_16() { return static_cast<int32_t>(offsetof(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2, ___ItemNameAppear_ani_16)); }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * get_ItemNameAppear_ani_16() const { return ___ItemNameAppear_ani_16; }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 ** get_address_of_ItemNameAppear_ani_16() { return &___ItemNameAppear_ani_16; }
	inline void set_ItemNameAppear_ani_16(Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * value)
	{
		___ItemNameAppear_ani_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ItemNameAppear_ani_16), (void*)value);
	}

	inline static int32_t get_offset_of_RandomTicket_AS_17() { return static_cast<int32_t>(offsetof(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2, ___RandomTicket_AS_17)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_RandomTicket_AS_17() const { return ___RandomTicket_AS_17; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_RandomTicket_AS_17() { return &___RandomTicket_AS_17; }
	inline void set_RandomTicket_AS_17(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___RandomTicket_AS_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RandomTicket_AS_17), (void*)value);
	}

	inline static int32_t get_offset_of_RandomResult_img_18() { return static_cast<int32_t>(offsetof(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2, ___RandomResult_img_18)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_RandomResult_img_18() const { return ___RandomResult_img_18; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_RandomResult_img_18() { return &___RandomResult_img_18; }
	inline void set_RandomResult_img_18(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___RandomResult_img_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RandomResult_img_18), (void*)value);
	}

	inline static int32_t get_offset_of_ItemNameResult_text_19() { return static_cast<int32_t>(offsetof(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2, ___ItemNameResult_text_19)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_ItemNameResult_text_19() const { return ___ItemNameResult_text_19; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_ItemNameResult_text_19() { return &___ItemNameResult_text_19; }
	inline void set_ItemNameResult_text_19(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___ItemNameResult_text_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ItemNameResult_text_19), (void*)value);
	}

	inline static int32_t get_offset_of_numOfRT_Text_20() { return static_cast<int32_t>(offsetof(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2, ___numOfRT_Text_20)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_numOfRT_Text_20() const { return ___numOfRT_Text_20; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_numOfRT_Text_20() { return &___numOfRT_Text_20; }
	inline void set_numOfRT_Text_20(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___numOfRT_Text_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numOfRT_Text_20), (void*)value);
	}

	inline static int32_t get_offset_of_HighItem_color_21() { return static_cast<int32_t>(offsetof(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2, ___HighItem_color_21)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_HighItem_color_21() const { return ___HighItem_color_21; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_HighItem_color_21() { return &___HighItem_color_21; }
	inline void set_HighItem_color_21(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___HighItem_color_21 = value;
	}

	inline static int32_t get_offset_of_Normal_color_22() { return static_cast<int32_t>(offsetof(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2, ___Normal_color_22)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_Normal_color_22() const { return ___Normal_color_22; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_Normal_color_22() { return &___Normal_color_22; }
	inline void set_Normal_color_22(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___Normal_color_22 = value;
	}

	inline static int32_t get_offset_of_NormalItemTicket_amount_23() { return static_cast<int32_t>(offsetof(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2, ___NormalItemTicket_amount_23)); }
	inline int32_t get_NormalItemTicket_amount_23() const { return ___NormalItemTicket_amount_23; }
	inline int32_t* get_address_of_NormalItemTicket_amount_23() { return &___NormalItemTicket_amount_23; }
	inline void set_NormalItemTicket_amount_23(int32_t value)
	{
		___NormalItemTicket_amount_23 = value;
	}

	inline static int32_t get_offset_of_numOfNI_texts_24() { return static_cast<int32_t>(offsetof(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2, ___numOfNI_texts_24)); }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* get_numOfNI_texts_24() const { return ___numOfNI_texts_24; }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F** get_address_of_numOfNI_texts_24() { return &___numOfNI_texts_24; }
	inline void set_numOfNI_texts_24(TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* value)
	{
		___numOfNI_texts_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numOfNI_texts_24), (void*)value);
	}

	inline static int32_t get_offset_of_HighRankItemTicket_amount_25() { return static_cast<int32_t>(offsetof(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2, ___HighRankItemTicket_amount_25)); }
	inline int32_t get_HighRankItemTicket_amount_25() const { return ___HighRankItemTicket_amount_25; }
	inline int32_t* get_address_of_HighRankItemTicket_amount_25() { return &___HighRankItemTicket_amount_25; }
	inline void set_HighRankItemTicket_amount_25(int32_t value)
	{
		___HighRankItemTicket_amount_25 = value;
	}

	inline static int32_t get_offset_of_numOfHI_texts_26() { return static_cast<int32_t>(offsetof(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2, ___numOfHI_texts_26)); }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* get_numOfHI_texts_26() const { return ___numOfHI_texts_26; }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F** get_address_of_numOfHI_texts_26() { return &___numOfHI_texts_26; }
	inline void set_numOfHI_texts_26(TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* value)
	{
		___numOfHI_texts_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numOfHI_texts_26), (void*)value);
	}

	inline static int32_t get_offset_of_TicketExchange_AS_27() { return static_cast<int32_t>(offsetof(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2, ___TicketExchange_AS_27)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_TicketExchange_AS_27() const { return ___TicketExchange_AS_27; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_TicketExchange_AS_27() { return &___TicketExchange_AS_27; }
	inline void set_TicketExchange_AS_27(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___TicketExchange_AS_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TicketExchange_AS_27), (void*)value);
	}

	inline static int32_t get_offset_of_rankTicket_Menu_28() { return static_cast<int32_t>(offsetof(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2, ___rankTicket_Menu_28)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_rankTicket_Menu_28() const { return ___rankTicket_Menu_28; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_rankTicket_Menu_28() { return &___rankTicket_Menu_28; }
	inline void set_rankTicket_Menu_28(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___rankTicket_Menu_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rankTicket_Menu_28), (void*)value);
	}

	inline static int32_t get_offset_of_rankTicket_MenuAni_29() { return static_cast<int32_t>(offsetof(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2, ___rankTicket_MenuAni_29)); }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * get_rankTicket_MenuAni_29() const { return ___rankTicket_MenuAni_29; }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 ** get_address_of_rankTicket_MenuAni_29() { return &___rankTicket_MenuAni_29; }
	inline void set_rankTicket_MenuAni_29(Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * value)
	{
		___rankTicket_MenuAni_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rankTicket_MenuAni_29), (void*)value);
	}

	inline static int32_t get_offset_of_SelectedItem_img_30() { return static_cast<int32_t>(offsetof(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2, ___SelectedItem_img_30)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_SelectedItem_img_30() const { return ___SelectedItem_img_30; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_SelectedItem_img_30() { return &___SelectedItem_img_30; }
	inline void set_SelectedItem_img_30(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___SelectedItem_img_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SelectedItem_img_30), (void*)value);
	}

	inline static int32_t get_offset_of_RankItemName_text_31() { return static_cast<int32_t>(offsetof(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2, ___RankItemName_text_31)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_RankItemName_text_31() const { return ___RankItemName_text_31; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_RankItemName_text_31() { return &___RankItemName_text_31; }
	inline void set_RankItemName_text_31(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___RankItemName_text_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RankItemName_text_31), (void*)value);
	}

	inline static int32_t get_offset_of_NormalTicket_Menu_32() { return static_cast<int32_t>(offsetof(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2, ___NormalTicket_Menu_32)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_NormalTicket_Menu_32() const { return ___NormalTicket_Menu_32; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_NormalTicket_Menu_32() { return &___NormalTicket_Menu_32; }
	inline void set_NormalTicket_Menu_32(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___NormalTicket_Menu_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NormalTicket_Menu_32), (void*)value);
	}

	inline static int32_t get_offset_of_HighTicket_Menu_33() { return static_cast<int32_t>(offsetof(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2, ___HighTicket_Menu_33)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_HighTicket_Menu_33() const { return ___HighTicket_Menu_33; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_HighTicket_Menu_33() { return &___HighTicket_Menu_33; }
	inline void set_HighTicket_Menu_33(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___HighTicket_Menu_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HighTicket_Menu_33), (void*)value);
	}

	inline static int32_t get_offset_of_SelectedItemCheck_Menu_34() { return static_cast<int32_t>(offsetof(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2, ___SelectedItemCheck_Menu_34)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SelectedItemCheck_Menu_34() const { return ___SelectedItemCheck_Menu_34; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SelectedItemCheck_Menu_34() { return &___SelectedItemCheck_Menu_34; }
	inline void set_SelectedItemCheck_Menu_34(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SelectedItemCheck_Menu_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SelectedItemCheck_Menu_34), (void*)value);
	}

	inline static int32_t get_offset_of_soundPrinted_35() { return static_cast<int32_t>(offsetof(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2, ___soundPrinted_35)); }
	inline bool get_soundPrinted_35() const { return ___soundPrinted_35; }
	inline bool* get_address_of_soundPrinted_35() { return &___soundPrinted_35; }
	inline void set_soundPrinted_35(bool value)
	{
		___soundPrinted_35 = value;
	}

	inline static int32_t get_offset_of_confirmed_36() { return static_cast<int32_t>(offsetof(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2, ___confirmed_36)); }
	inline bool get_confirmed_36() const { return ___confirmed_36; }
	inline bool* get_address_of_confirmed_36() { return &___confirmed_36; }
	inline void set_confirmed_36(bool value)
	{
		___confirmed_36 = value;
	}

	inline static int32_t get_offset_of_isnormal_37() { return static_cast<int32_t>(offsetof(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2, ___isnormal_37)); }
	inline bool get_isnormal_37() const { return ___isnormal_37; }
	inline bool* get_address_of_isnormal_37() { return &___isnormal_37; }
	inline void set_isnormal_37(bool value)
	{
		___isnormal_37 = value;
	}

	inline static int32_t get_offset_of_kind_item_38() { return static_cast<int32_t>(offsetof(TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2, ___kind_item_38)); }
	inline int32_t get_kind_item_38() const { return ___kind_item_38; }
	inline int32_t* get_address_of_kind_item_38() { return &___kind_item_38; }
	inline void set_kind_item_38(int32_t value)
	{
		___kind_item_38 = value;
	}
};


// TutorialMgr
struct  TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean TutorialMgr::isTutorialOn
	bool ___isTutorialOn_4;
	// System.Boolean TutorialMgr::gameovered_teacher
	bool ___gameovered_teacher_5;
	// System.Boolean TutorialMgr::gameovered_endurance
	bool ___gameovered_endurance_6;
	// System.Boolean TutorialMgr::gameovered_snack
	bool ___gameovered_snack_7;
	// UnityEngine.GameObject TutorialMgr::Tutorial_Group
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Tutorial_Group_8;
	// System.Boolean[] TutorialMgr::didTutorialComplete
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___didTutorialComplete_9;
	// UnityEngine.GameObject[] TutorialMgr::Game_tutorial
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___Game_tutorial_10;
	// MainSceneMgr TutorialMgr::mainSceneMgr
	MainSceneMgr_t343ABFBEB84190D4CB9232C310D5ADD6CC0E5117 * ___mainSceneMgr_11;
	// ItemMgr TutorialMgr::itemMgr
	ItemMgr_t7E210A71B7FC2B9D76B7FD54A59ACE50E5A33D85 * ___itemMgr_12;
	// InGameMgr TutorialMgr::inGameMgr
	InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 * ___inGameMgr_13;
	// DataManager TutorialMgr::dataManager
	DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * ___dataManager_14;
	// TeacherMgr TutorialMgr::teacherMgr
	TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E * ___teacherMgr_15;
	// DailyGiftMgr TutorialMgr::dailyGiftMgr
	DailyGiftMgr_t908CDDC51C2FFF6591A567DEA9FF28E616634579 * ___dailyGiftMgr_16;
	// System.Int32 TutorialMgr::explainStep
	int32_t ___explainStep_17;
	// System.Int32 TutorialMgr::SceneNumber
	int32_t ___SceneNumber_18;
	// TvGameMgr TutorialMgr::tvGameMgr
	TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * ___tvGameMgr_19;
	// TVButtonMgr TutorialMgr::tvButtonMgr
	TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C * ___tvButtonMgr_20;
	// UnityEngine.GameObject TutorialMgr::tvpowerBlockImg
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___tvpowerBlockImg_21;
	// UnityEngine.GameObject TutorialMgr::RCmoveArea
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___RCmoveArea_22;
	// KatalkGameMgr TutorialMgr::katalkGameMgr
	KatalkGameMgr_tFC6829AF28819804C713254F0B5B96BBE4147776 * ___katalkGameMgr_23;
	// PhoneConMgr TutorialMgr::phoneConMgr
	PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6 * ___phoneConMgr_24;
	// SuggestWords TutorialMgr::suggestWords
	SuggestWords_t98447E746D542CFBC29E31430CB5B96B92FEE357 * ___suggestWords_25;
	// UnityEngine.UI.Button TutorialMgr::Sendbutton_NextButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___Sendbutton_NextButton_26;
	// Option TutorialMgr::option
	Option_t4668F0CFD50CE7253A226099157E10033328C0E7 * ___option_27;
	// UnityEngine.UI.Text TutorialMgr::MissionResult_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___MissionResult_text_28;
	// System.String TutorialMgr::successMessage
	String_t* ___successMessage_29;
	// System.String TutorialMgr::failMessage
	String_t* ___failMessage_30;
	// UnityEngine.GameObject TutorialMgr::BlockPhoneOnOffImg
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BlockPhoneOnOffImg_31;
	// UnityEngine.GameObject TutorialMgr::BlockMessageOnImg
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BlockMessageOnImg_32;
	// UnityEngine.GameObject TutorialMgr::nextbutton_EatSnack
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___nextbutton_EatSnack_33;
	// UnityEngine.GameObject TutorialMgr::BlockEat
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BlockEat_34;
	// SnackGameMgr TutorialMgr::snackGameMgr
	SnackGameMgr_t753894511F69E7A4EB2E5AA5EAFFED1B63684081 * ___snackGameMgr_35;
	// System.Boolean TutorialMgr::stopTimerForTutorial
	bool ___stopTimerForTutorial_36;
	// UnityEngine.GameObject TutorialMgr::onGameOver_tut
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___onGameOver_tut_37;
	// UnityEngine.UI.Text TutorialMgr::reason_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___reason_text_38;
	// System.Boolean TutorialMgr::needLateOn
	bool ___needLateOn_39;
	// UnityEngine.GameObject TutorialMgr::ResetImg
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ResetImg_40;
	// UnityEngine.Animation TutorialMgr::rotateLoadingCircle_ani
	Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * ___rotateLoadingCircle_ani_41;

public:
	inline static int32_t get_offset_of_isTutorialOn_4() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___isTutorialOn_4)); }
	inline bool get_isTutorialOn_4() const { return ___isTutorialOn_4; }
	inline bool* get_address_of_isTutorialOn_4() { return &___isTutorialOn_4; }
	inline void set_isTutorialOn_4(bool value)
	{
		___isTutorialOn_4 = value;
	}

	inline static int32_t get_offset_of_gameovered_teacher_5() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___gameovered_teacher_5)); }
	inline bool get_gameovered_teacher_5() const { return ___gameovered_teacher_5; }
	inline bool* get_address_of_gameovered_teacher_5() { return &___gameovered_teacher_5; }
	inline void set_gameovered_teacher_5(bool value)
	{
		___gameovered_teacher_5 = value;
	}

	inline static int32_t get_offset_of_gameovered_endurance_6() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___gameovered_endurance_6)); }
	inline bool get_gameovered_endurance_6() const { return ___gameovered_endurance_6; }
	inline bool* get_address_of_gameovered_endurance_6() { return &___gameovered_endurance_6; }
	inline void set_gameovered_endurance_6(bool value)
	{
		___gameovered_endurance_6 = value;
	}

	inline static int32_t get_offset_of_gameovered_snack_7() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___gameovered_snack_7)); }
	inline bool get_gameovered_snack_7() const { return ___gameovered_snack_7; }
	inline bool* get_address_of_gameovered_snack_7() { return &___gameovered_snack_7; }
	inline void set_gameovered_snack_7(bool value)
	{
		___gameovered_snack_7 = value;
	}

	inline static int32_t get_offset_of_Tutorial_Group_8() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___Tutorial_Group_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Tutorial_Group_8() const { return ___Tutorial_Group_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Tutorial_Group_8() { return &___Tutorial_Group_8; }
	inline void set_Tutorial_Group_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Tutorial_Group_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tutorial_Group_8), (void*)value);
	}

	inline static int32_t get_offset_of_didTutorialComplete_9() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___didTutorialComplete_9)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_didTutorialComplete_9() const { return ___didTutorialComplete_9; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_didTutorialComplete_9() { return &___didTutorialComplete_9; }
	inline void set_didTutorialComplete_9(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___didTutorialComplete_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___didTutorialComplete_9), (void*)value);
	}

	inline static int32_t get_offset_of_Game_tutorial_10() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___Game_tutorial_10)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_Game_tutorial_10() const { return ___Game_tutorial_10; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_Game_tutorial_10() { return &___Game_tutorial_10; }
	inline void set_Game_tutorial_10(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___Game_tutorial_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Game_tutorial_10), (void*)value);
	}

	inline static int32_t get_offset_of_mainSceneMgr_11() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___mainSceneMgr_11)); }
	inline MainSceneMgr_t343ABFBEB84190D4CB9232C310D5ADD6CC0E5117 * get_mainSceneMgr_11() const { return ___mainSceneMgr_11; }
	inline MainSceneMgr_t343ABFBEB84190D4CB9232C310D5ADD6CC0E5117 ** get_address_of_mainSceneMgr_11() { return &___mainSceneMgr_11; }
	inline void set_mainSceneMgr_11(MainSceneMgr_t343ABFBEB84190D4CB9232C310D5ADD6CC0E5117 * value)
	{
		___mainSceneMgr_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainSceneMgr_11), (void*)value);
	}

	inline static int32_t get_offset_of_itemMgr_12() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___itemMgr_12)); }
	inline ItemMgr_t7E210A71B7FC2B9D76B7FD54A59ACE50E5A33D85 * get_itemMgr_12() const { return ___itemMgr_12; }
	inline ItemMgr_t7E210A71B7FC2B9D76B7FD54A59ACE50E5A33D85 ** get_address_of_itemMgr_12() { return &___itemMgr_12; }
	inline void set_itemMgr_12(ItemMgr_t7E210A71B7FC2B9D76B7FD54A59ACE50E5A33D85 * value)
	{
		___itemMgr_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemMgr_12), (void*)value);
	}

	inline static int32_t get_offset_of_inGameMgr_13() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___inGameMgr_13)); }
	inline InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 * get_inGameMgr_13() const { return ___inGameMgr_13; }
	inline InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 ** get_address_of_inGameMgr_13() { return &___inGameMgr_13; }
	inline void set_inGameMgr_13(InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 * value)
	{
		___inGameMgr_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inGameMgr_13), (void*)value);
	}

	inline static int32_t get_offset_of_dataManager_14() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___dataManager_14)); }
	inline DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * get_dataManager_14() const { return ___dataManager_14; }
	inline DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 ** get_address_of_dataManager_14() { return &___dataManager_14; }
	inline void set_dataManager_14(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * value)
	{
		___dataManager_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataManager_14), (void*)value);
	}

	inline static int32_t get_offset_of_teacherMgr_15() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___teacherMgr_15)); }
	inline TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E * get_teacherMgr_15() const { return ___teacherMgr_15; }
	inline TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E ** get_address_of_teacherMgr_15() { return &___teacherMgr_15; }
	inline void set_teacherMgr_15(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E * value)
	{
		___teacherMgr_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___teacherMgr_15), (void*)value);
	}

	inline static int32_t get_offset_of_dailyGiftMgr_16() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___dailyGiftMgr_16)); }
	inline DailyGiftMgr_t908CDDC51C2FFF6591A567DEA9FF28E616634579 * get_dailyGiftMgr_16() const { return ___dailyGiftMgr_16; }
	inline DailyGiftMgr_t908CDDC51C2FFF6591A567DEA9FF28E616634579 ** get_address_of_dailyGiftMgr_16() { return &___dailyGiftMgr_16; }
	inline void set_dailyGiftMgr_16(DailyGiftMgr_t908CDDC51C2FFF6591A567DEA9FF28E616634579 * value)
	{
		___dailyGiftMgr_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dailyGiftMgr_16), (void*)value);
	}

	inline static int32_t get_offset_of_explainStep_17() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___explainStep_17)); }
	inline int32_t get_explainStep_17() const { return ___explainStep_17; }
	inline int32_t* get_address_of_explainStep_17() { return &___explainStep_17; }
	inline void set_explainStep_17(int32_t value)
	{
		___explainStep_17 = value;
	}

	inline static int32_t get_offset_of_SceneNumber_18() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___SceneNumber_18)); }
	inline int32_t get_SceneNumber_18() const { return ___SceneNumber_18; }
	inline int32_t* get_address_of_SceneNumber_18() { return &___SceneNumber_18; }
	inline void set_SceneNumber_18(int32_t value)
	{
		___SceneNumber_18 = value;
	}

	inline static int32_t get_offset_of_tvGameMgr_19() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___tvGameMgr_19)); }
	inline TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * get_tvGameMgr_19() const { return ___tvGameMgr_19; }
	inline TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 ** get_address_of_tvGameMgr_19() { return &___tvGameMgr_19; }
	inline void set_tvGameMgr_19(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * value)
	{
		___tvGameMgr_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tvGameMgr_19), (void*)value);
	}

	inline static int32_t get_offset_of_tvButtonMgr_20() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___tvButtonMgr_20)); }
	inline TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C * get_tvButtonMgr_20() const { return ___tvButtonMgr_20; }
	inline TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C ** get_address_of_tvButtonMgr_20() { return &___tvButtonMgr_20; }
	inline void set_tvButtonMgr_20(TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C * value)
	{
		___tvButtonMgr_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tvButtonMgr_20), (void*)value);
	}

	inline static int32_t get_offset_of_tvpowerBlockImg_21() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___tvpowerBlockImg_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_tvpowerBlockImg_21() const { return ___tvpowerBlockImg_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_tvpowerBlockImg_21() { return &___tvpowerBlockImg_21; }
	inline void set_tvpowerBlockImg_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___tvpowerBlockImg_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tvpowerBlockImg_21), (void*)value);
	}

	inline static int32_t get_offset_of_RCmoveArea_22() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___RCmoveArea_22)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_RCmoveArea_22() const { return ___RCmoveArea_22; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_RCmoveArea_22() { return &___RCmoveArea_22; }
	inline void set_RCmoveArea_22(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___RCmoveArea_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RCmoveArea_22), (void*)value);
	}

	inline static int32_t get_offset_of_katalkGameMgr_23() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___katalkGameMgr_23)); }
	inline KatalkGameMgr_tFC6829AF28819804C713254F0B5B96BBE4147776 * get_katalkGameMgr_23() const { return ___katalkGameMgr_23; }
	inline KatalkGameMgr_tFC6829AF28819804C713254F0B5B96BBE4147776 ** get_address_of_katalkGameMgr_23() { return &___katalkGameMgr_23; }
	inline void set_katalkGameMgr_23(KatalkGameMgr_tFC6829AF28819804C713254F0B5B96BBE4147776 * value)
	{
		___katalkGameMgr_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___katalkGameMgr_23), (void*)value);
	}

	inline static int32_t get_offset_of_phoneConMgr_24() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___phoneConMgr_24)); }
	inline PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6 * get_phoneConMgr_24() const { return ___phoneConMgr_24; }
	inline PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6 ** get_address_of_phoneConMgr_24() { return &___phoneConMgr_24; }
	inline void set_phoneConMgr_24(PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6 * value)
	{
		___phoneConMgr_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___phoneConMgr_24), (void*)value);
	}

	inline static int32_t get_offset_of_suggestWords_25() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___suggestWords_25)); }
	inline SuggestWords_t98447E746D542CFBC29E31430CB5B96B92FEE357 * get_suggestWords_25() const { return ___suggestWords_25; }
	inline SuggestWords_t98447E746D542CFBC29E31430CB5B96B92FEE357 ** get_address_of_suggestWords_25() { return &___suggestWords_25; }
	inline void set_suggestWords_25(SuggestWords_t98447E746D542CFBC29E31430CB5B96B92FEE357 * value)
	{
		___suggestWords_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___suggestWords_25), (void*)value);
	}

	inline static int32_t get_offset_of_Sendbutton_NextButton_26() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___Sendbutton_NextButton_26)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_Sendbutton_NextButton_26() const { return ___Sendbutton_NextButton_26; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_Sendbutton_NextButton_26() { return &___Sendbutton_NextButton_26; }
	inline void set_Sendbutton_NextButton_26(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___Sendbutton_NextButton_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Sendbutton_NextButton_26), (void*)value);
	}

	inline static int32_t get_offset_of_option_27() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___option_27)); }
	inline Option_t4668F0CFD50CE7253A226099157E10033328C0E7 * get_option_27() const { return ___option_27; }
	inline Option_t4668F0CFD50CE7253A226099157E10033328C0E7 ** get_address_of_option_27() { return &___option_27; }
	inline void set_option_27(Option_t4668F0CFD50CE7253A226099157E10033328C0E7 * value)
	{
		___option_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___option_27), (void*)value);
	}

	inline static int32_t get_offset_of_MissionResult_text_28() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___MissionResult_text_28)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_MissionResult_text_28() const { return ___MissionResult_text_28; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_MissionResult_text_28() { return &___MissionResult_text_28; }
	inline void set_MissionResult_text_28(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___MissionResult_text_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MissionResult_text_28), (void*)value);
	}

	inline static int32_t get_offset_of_successMessage_29() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___successMessage_29)); }
	inline String_t* get_successMessage_29() const { return ___successMessage_29; }
	inline String_t** get_address_of_successMessage_29() { return &___successMessage_29; }
	inline void set_successMessage_29(String_t* value)
	{
		___successMessage_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___successMessage_29), (void*)value);
	}

	inline static int32_t get_offset_of_failMessage_30() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___failMessage_30)); }
	inline String_t* get_failMessage_30() const { return ___failMessage_30; }
	inline String_t** get_address_of_failMessage_30() { return &___failMessage_30; }
	inline void set_failMessage_30(String_t* value)
	{
		___failMessage_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___failMessage_30), (void*)value);
	}

	inline static int32_t get_offset_of_BlockPhoneOnOffImg_31() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___BlockPhoneOnOffImg_31)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BlockPhoneOnOffImg_31() const { return ___BlockPhoneOnOffImg_31; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BlockPhoneOnOffImg_31() { return &___BlockPhoneOnOffImg_31; }
	inline void set_BlockPhoneOnOffImg_31(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BlockPhoneOnOffImg_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BlockPhoneOnOffImg_31), (void*)value);
	}

	inline static int32_t get_offset_of_BlockMessageOnImg_32() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___BlockMessageOnImg_32)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BlockMessageOnImg_32() const { return ___BlockMessageOnImg_32; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BlockMessageOnImg_32() { return &___BlockMessageOnImg_32; }
	inline void set_BlockMessageOnImg_32(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BlockMessageOnImg_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BlockMessageOnImg_32), (void*)value);
	}

	inline static int32_t get_offset_of_nextbutton_EatSnack_33() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___nextbutton_EatSnack_33)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_nextbutton_EatSnack_33() const { return ___nextbutton_EatSnack_33; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_nextbutton_EatSnack_33() { return &___nextbutton_EatSnack_33; }
	inline void set_nextbutton_EatSnack_33(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___nextbutton_EatSnack_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextbutton_EatSnack_33), (void*)value);
	}

	inline static int32_t get_offset_of_BlockEat_34() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___BlockEat_34)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BlockEat_34() const { return ___BlockEat_34; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BlockEat_34() { return &___BlockEat_34; }
	inline void set_BlockEat_34(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BlockEat_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BlockEat_34), (void*)value);
	}

	inline static int32_t get_offset_of_snackGameMgr_35() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___snackGameMgr_35)); }
	inline SnackGameMgr_t753894511F69E7A4EB2E5AA5EAFFED1B63684081 * get_snackGameMgr_35() const { return ___snackGameMgr_35; }
	inline SnackGameMgr_t753894511F69E7A4EB2E5AA5EAFFED1B63684081 ** get_address_of_snackGameMgr_35() { return &___snackGameMgr_35; }
	inline void set_snackGameMgr_35(SnackGameMgr_t753894511F69E7A4EB2E5AA5EAFFED1B63684081 * value)
	{
		___snackGameMgr_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___snackGameMgr_35), (void*)value);
	}

	inline static int32_t get_offset_of_stopTimerForTutorial_36() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___stopTimerForTutorial_36)); }
	inline bool get_stopTimerForTutorial_36() const { return ___stopTimerForTutorial_36; }
	inline bool* get_address_of_stopTimerForTutorial_36() { return &___stopTimerForTutorial_36; }
	inline void set_stopTimerForTutorial_36(bool value)
	{
		___stopTimerForTutorial_36 = value;
	}

	inline static int32_t get_offset_of_onGameOver_tut_37() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___onGameOver_tut_37)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_onGameOver_tut_37() const { return ___onGameOver_tut_37; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_onGameOver_tut_37() { return &___onGameOver_tut_37; }
	inline void set_onGameOver_tut_37(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___onGameOver_tut_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onGameOver_tut_37), (void*)value);
	}

	inline static int32_t get_offset_of_reason_text_38() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___reason_text_38)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_reason_text_38() const { return ___reason_text_38; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_reason_text_38() { return &___reason_text_38; }
	inline void set_reason_text_38(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___reason_text_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reason_text_38), (void*)value);
	}

	inline static int32_t get_offset_of_needLateOn_39() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___needLateOn_39)); }
	inline bool get_needLateOn_39() const { return ___needLateOn_39; }
	inline bool* get_address_of_needLateOn_39() { return &___needLateOn_39; }
	inline void set_needLateOn_39(bool value)
	{
		___needLateOn_39 = value;
	}

	inline static int32_t get_offset_of_ResetImg_40() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___ResetImg_40)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ResetImg_40() const { return ___ResetImg_40; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ResetImg_40() { return &___ResetImg_40; }
	inline void set_ResetImg_40(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ResetImg_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResetImg_40), (void*)value);
	}

	inline static int32_t get_offset_of_rotateLoadingCircle_ani_41() { return static_cast<int32_t>(offsetof(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD, ___rotateLoadingCircle_ani_41)); }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * get_rotateLoadingCircle_ani_41() const { return ___rotateLoadingCircle_ani_41; }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 ** get_address_of_rotateLoadingCircle_ani_41() { return &___rotateLoadingCircle_ani_41; }
	inline void set_rotateLoadingCircle_ani_41(Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * value)
	{
		___rotateLoadingCircle_ani_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rotateLoadingCircle_ani_41), (void*)value);
	}
};


// TvGameMgr
struct  TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.UInt64 TvGameMgr::Score
	uint64_t ___Score_4;
	// System.Int32 TvGameMgr::Endurance
	int32_t ___Endurance_5;
	// System.Int32 TvGameMgr::EnduranceMax
	int32_t ___EnduranceMax_6;
	// System.UInt64 TvGameMgr::BestScore
	uint64_t ___BestScore_7;
	// System.Int32 TvGameMgr::numOfMissionClear
	int32_t ___numOfMissionClear_8;
	// System.Collections.IEnumerator TvGameMgr::plusScore
	RuntimeObject* ___plusScore_9;
	// System.Boolean TvGameMgr::FailedLeaderboard
	bool ___FailedLeaderboard_10;
	// System.Single TvGameMgr::WaitMissionMin
	float ___WaitMissionMin_11;
	// System.Single TvGameMgr::WaitMissionMax
	float ___WaitMissionMax_12;
	// System.Collections.IEnumerator TvGameMgr::Waitmission
	RuntimeObject* ___Waitmission_13;
	// System.Int32 TvGameMgr::targetChannel
	int32_t ___targetChannel_14;
	// System.Int32 TvGameMgr::startChannel
	int32_t ___startChannel_15;
	// System.Int32 TvGameMgr::targetTVPower
	int32_t ___targetTVPower_16;
	// System.Int32 TvGameMgr::numOfTVPower
	int32_t ___numOfTVPower_17;
	// System.Int32 TvGameMgr::TVPowerMax
	int32_t ___TVPowerMax_18;
	// System.Int32 TvGameMgr::TVPowerMin
	int32_t ___TVPowerMin_19;
	// System.Boolean TvGameMgr::isPowerMissionOn
	bool ___isPowerMissionOn_20;
	// System.Collections.IEnumerator TvGameMgr::decreaseEndur
	RuntimeObject* ___decreaseEndur_21;
	// System.UInt64 TvGameMgr::addingScore
	uint64_t ___addingScore_22;
	// System.Int32 TvGameMgr::percentageOfCoin
	int32_t ___percentageOfCoin_23;
	// UnityEngine.UI.Text TvGameMgr::Score_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Score_text_24;
	// UnityEngine.UI.Text TvGameMgr::BestScore_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___BestScore_text_25;
	// UnityEngine.UI.Slider TvGameMgr::Endurance_slider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___Endurance_slider_26;
	// UnityEngine.Animation TvGameMgr::BonusScore_ani
	Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * ___BonusScore_ani_27;
	// UnityEngine.UI.Text TvGameMgr::BonusScore_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___BonusScore_text_28;
	// UnityEngine.Animation TvGameMgr::BonusCoin_ani
	Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * ___BonusCoin_ani_29;
	// UnityEngine.UI.Text TvGameMgr::BonusCoin_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___BonusCoin_text_30;
	// UnityEngine.UI.Text TvGameMgr::FinalScore_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___FinalScore_text_31;
	// UnityEngine.UI.Text TvGameMgr::CoinGet_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___CoinGet_text_32;
	// UnityEngine.UI.Text TvGameMgr::Mission_text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Mission_text_33;
	// UnityEngine.GameObject TvGameMgr::Mission_Backimg
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Mission_Backimg_34;
	// TVButtonMgr TvGameMgr::tvButtonMgr
	TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C * ___tvButtonMgr_35;
	// InGameMgr TvGameMgr::inGameMgr
	InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 * ___inGameMgr_36;
	// TeacherMgr TvGameMgr::teacherMgr
	TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E * ___teacherMgr_37;
	// DifficultyData TvGameMgr::tvDifficultyData
	DifficultyData_tB1A89BA060411BADB493F4CAA1D05880D1F2C4F2 * ___tvDifficultyData_38;
	// DataManager TvGameMgr::dataMgr
	DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * ___dataMgr_39;
	// SliderColorMgr TvGameMgr::endurColorMgr
	SliderColorMgr_t8690AB1B9F806F42AD0A9B9101BC259802451428 * ___endurColorMgr_40;
	// CoinMgr TvGameMgr::coinMgr
	CoinMgr_tD1020715095479E870A6900CD7EB3FEB6799CF50 * ___coinMgr_41;
	// ItemMgr TvGameMgr::itemMgr
	ItemMgr_t7E210A71B7FC2B9D76B7FD54A59ACE50E5A33D85 * ___itemMgr_42;
	// TutorialMgr TvGameMgr::tutorialMgr
	TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * ___tutorialMgr_43;
	// Option TvGameMgr::option
	Option_t4668F0CFD50CE7253A226099157E10033328C0E7 * ___option_44;
	// LeaderboardMgr TvGameMgr::leaderboardMgr
	LeaderboardMgr_t06FB7DCB727FC61741D924E64778B02D72724305 * ___leaderboardMgr_45;
	// LevelMgr TvGameMgr::levelMgr
	LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503 * ___levelMgr_46;
	// GageMove TvGameMgr::Endur_gageMove
	GageMove_t12372F686CA9F6984B88FD2B0CE2704AA1CC9969 * ___Endur_gageMove_47;
	// UnityEngine.GameObject TvGameMgr::GameOver_Menu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GameOver_Menu_48;

public:
	inline static int32_t get_offset_of_Score_4() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___Score_4)); }
	inline uint64_t get_Score_4() const { return ___Score_4; }
	inline uint64_t* get_address_of_Score_4() { return &___Score_4; }
	inline void set_Score_4(uint64_t value)
	{
		___Score_4 = value;
	}

	inline static int32_t get_offset_of_Endurance_5() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___Endurance_5)); }
	inline int32_t get_Endurance_5() const { return ___Endurance_5; }
	inline int32_t* get_address_of_Endurance_5() { return &___Endurance_5; }
	inline void set_Endurance_5(int32_t value)
	{
		___Endurance_5 = value;
	}

	inline static int32_t get_offset_of_EnduranceMax_6() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___EnduranceMax_6)); }
	inline int32_t get_EnduranceMax_6() const { return ___EnduranceMax_6; }
	inline int32_t* get_address_of_EnduranceMax_6() { return &___EnduranceMax_6; }
	inline void set_EnduranceMax_6(int32_t value)
	{
		___EnduranceMax_6 = value;
	}

	inline static int32_t get_offset_of_BestScore_7() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___BestScore_7)); }
	inline uint64_t get_BestScore_7() const { return ___BestScore_7; }
	inline uint64_t* get_address_of_BestScore_7() { return &___BestScore_7; }
	inline void set_BestScore_7(uint64_t value)
	{
		___BestScore_7 = value;
	}

	inline static int32_t get_offset_of_numOfMissionClear_8() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___numOfMissionClear_8)); }
	inline int32_t get_numOfMissionClear_8() const { return ___numOfMissionClear_8; }
	inline int32_t* get_address_of_numOfMissionClear_8() { return &___numOfMissionClear_8; }
	inline void set_numOfMissionClear_8(int32_t value)
	{
		___numOfMissionClear_8 = value;
	}

	inline static int32_t get_offset_of_plusScore_9() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___plusScore_9)); }
	inline RuntimeObject* get_plusScore_9() const { return ___plusScore_9; }
	inline RuntimeObject** get_address_of_plusScore_9() { return &___plusScore_9; }
	inline void set_plusScore_9(RuntimeObject* value)
	{
		___plusScore_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___plusScore_9), (void*)value);
	}

	inline static int32_t get_offset_of_FailedLeaderboard_10() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___FailedLeaderboard_10)); }
	inline bool get_FailedLeaderboard_10() const { return ___FailedLeaderboard_10; }
	inline bool* get_address_of_FailedLeaderboard_10() { return &___FailedLeaderboard_10; }
	inline void set_FailedLeaderboard_10(bool value)
	{
		___FailedLeaderboard_10 = value;
	}

	inline static int32_t get_offset_of_WaitMissionMin_11() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___WaitMissionMin_11)); }
	inline float get_WaitMissionMin_11() const { return ___WaitMissionMin_11; }
	inline float* get_address_of_WaitMissionMin_11() { return &___WaitMissionMin_11; }
	inline void set_WaitMissionMin_11(float value)
	{
		___WaitMissionMin_11 = value;
	}

	inline static int32_t get_offset_of_WaitMissionMax_12() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___WaitMissionMax_12)); }
	inline float get_WaitMissionMax_12() const { return ___WaitMissionMax_12; }
	inline float* get_address_of_WaitMissionMax_12() { return &___WaitMissionMax_12; }
	inline void set_WaitMissionMax_12(float value)
	{
		___WaitMissionMax_12 = value;
	}

	inline static int32_t get_offset_of_Waitmission_13() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___Waitmission_13)); }
	inline RuntimeObject* get_Waitmission_13() const { return ___Waitmission_13; }
	inline RuntimeObject** get_address_of_Waitmission_13() { return &___Waitmission_13; }
	inline void set_Waitmission_13(RuntimeObject* value)
	{
		___Waitmission_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Waitmission_13), (void*)value);
	}

	inline static int32_t get_offset_of_targetChannel_14() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___targetChannel_14)); }
	inline int32_t get_targetChannel_14() const { return ___targetChannel_14; }
	inline int32_t* get_address_of_targetChannel_14() { return &___targetChannel_14; }
	inline void set_targetChannel_14(int32_t value)
	{
		___targetChannel_14 = value;
	}

	inline static int32_t get_offset_of_startChannel_15() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___startChannel_15)); }
	inline int32_t get_startChannel_15() const { return ___startChannel_15; }
	inline int32_t* get_address_of_startChannel_15() { return &___startChannel_15; }
	inline void set_startChannel_15(int32_t value)
	{
		___startChannel_15 = value;
	}

	inline static int32_t get_offset_of_targetTVPower_16() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___targetTVPower_16)); }
	inline int32_t get_targetTVPower_16() const { return ___targetTVPower_16; }
	inline int32_t* get_address_of_targetTVPower_16() { return &___targetTVPower_16; }
	inline void set_targetTVPower_16(int32_t value)
	{
		___targetTVPower_16 = value;
	}

	inline static int32_t get_offset_of_numOfTVPower_17() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___numOfTVPower_17)); }
	inline int32_t get_numOfTVPower_17() const { return ___numOfTVPower_17; }
	inline int32_t* get_address_of_numOfTVPower_17() { return &___numOfTVPower_17; }
	inline void set_numOfTVPower_17(int32_t value)
	{
		___numOfTVPower_17 = value;
	}

	inline static int32_t get_offset_of_TVPowerMax_18() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___TVPowerMax_18)); }
	inline int32_t get_TVPowerMax_18() const { return ___TVPowerMax_18; }
	inline int32_t* get_address_of_TVPowerMax_18() { return &___TVPowerMax_18; }
	inline void set_TVPowerMax_18(int32_t value)
	{
		___TVPowerMax_18 = value;
	}

	inline static int32_t get_offset_of_TVPowerMin_19() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___TVPowerMin_19)); }
	inline int32_t get_TVPowerMin_19() const { return ___TVPowerMin_19; }
	inline int32_t* get_address_of_TVPowerMin_19() { return &___TVPowerMin_19; }
	inline void set_TVPowerMin_19(int32_t value)
	{
		___TVPowerMin_19 = value;
	}

	inline static int32_t get_offset_of_isPowerMissionOn_20() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___isPowerMissionOn_20)); }
	inline bool get_isPowerMissionOn_20() const { return ___isPowerMissionOn_20; }
	inline bool* get_address_of_isPowerMissionOn_20() { return &___isPowerMissionOn_20; }
	inline void set_isPowerMissionOn_20(bool value)
	{
		___isPowerMissionOn_20 = value;
	}

	inline static int32_t get_offset_of_decreaseEndur_21() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___decreaseEndur_21)); }
	inline RuntimeObject* get_decreaseEndur_21() const { return ___decreaseEndur_21; }
	inline RuntimeObject** get_address_of_decreaseEndur_21() { return &___decreaseEndur_21; }
	inline void set_decreaseEndur_21(RuntimeObject* value)
	{
		___decreaseEndur_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decreaseEndur_21), (void*)value);
	}

	inline static int32_t get_offset_of_addingScore_22() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___addingScore_22)); }
	inline uint64_t get_addingScore_22() const { return ___addingScore_22; }
	inline uint64_t* get_address_of_addingScore_22() { return &___addingScore_22; }
	inline void set_addingScore_22(uint64_t value)
	{
		___addingScore_22 = value;
	}

	inline static int32_t get_offset_of_percentageOfCoin_23() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___percentageOfCoin_23)); }
	inline int32_t get_percentageOfCoin_23() const { return ___percentageOfCoin_23; }
	inline int32_t* get_address_of_percentageOfCoin_23() { return &___percentageOfCoin_23; }
	inline void set_percentageOfCoin_23(int32_t value)
	{
		___percentageOfCoin_23 = value;
	}

	inline static int32_t get_offset_of_Score_text_24() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___Score_text_24)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Score_text_24() const { return ___Score_text_24; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Score_text_24() { return &___Score_text_24; }
	inline void set_Score_text_24(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Score_text_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Score_text_24), (void*)value);
	}

	inline static int32_t get_offset_of_BestScore_text_25() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___BestScore_text_25)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_BestScore_text_25() const { return ___BestScore_text_25; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_BestScore_text_25() { return &___BestScore_text_25; }
	inline void set_BestScore_text_25(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___BestScore_text_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BestScore_text_25), (void*)value);
	}

	inline static int32_t get_offset_of_Endurance_slider_26() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___Endurance_slider_26)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_Endurance_slider_26() const { return ___Endurance_slider_26; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_Endurance_slider_26() { return &___Endurance_slider_26; }
	inline void set_Endurance_slider_26(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___Endurance_slider_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Endurance_slider_26), (void*)value);
	}

	inline static int32_t get_offset_of_BonusScore_ani_27() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___BonusScore_ani_27)); }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * get_BonusScore_ani_27() const { return ___BonusScore_ani_27; }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 ** get_address_of_BonusScore_ani_27() { return &___BonusScore_ani_27; }
	inline void set_BonusScore_ani_27(Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * value)
	{
		___BonusScore_ani_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BonusScore_ani_27), (void*)value);
	}

	inline static int32_t get_offset_of_BonusScore_text_28() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___BonusScore_text_28)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_BonusScore_text_28() const { return ___BonusScore_text_28; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_BonusScore_text_28() { return &___BonusScore_text_28; }
	inline void set_BonusScore_text_28(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___BonusScore_text_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BonusScore_text_28), (void*)value);
	}

	inline static int32_t get_offset_of_BonusCoin_ani_29() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___BonusCoin_ani_29)); }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * get_BonusCoin_ani_29() const { return ___BonusCoin_ani_29; }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 ** get_address_of_BonusCoin_ani_29() { return &___BonusCoin_ani_29; }
	inline void set_BonusCoin_ani_29(Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * value)
	{
		___BonusCoin_ani_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BonusCoin_ani_29), (void*)value);
	}

	inline static int32_t get_offset_of_BonusCoin_text_30() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___BonusCoin_text_30)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_BonusCoin_text_30() const { return ___BonusCoin_text_30; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_BonusCoin_text_30() { return &___BonusCoin_text_30; }
	inline void set_BonusCoin_text_30(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___BonusCoin_text_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BonusCoin_text_30), (void*)value);
	}

	inline static int32_t get_offset_of_FinalScore_text_31() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___FinalScore_text_31)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_FinalScore_text_31() const { return ___FinalScore_text_31; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_FinalScore_text_31() { return &___FinalScore_text_31; }
	inline void set_FinalScore_text_31(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___FinalScore_text_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FinalScore_text_31), (void*)value);
	}

	inline static int32_t get_offset_of_CoinGet_text_32() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___CoinGet_text_32)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_CoinGet_text_32() const { return ___CoinGet_text_32; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_CoinGet_text_32() { return &___CoinGet_text_32; }
	inline void set_CoinGet_text_32(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___CoinGet_text_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoinGet_text_32), (void*)value);
	}

	inline static int32_t get_offset_of_Mission_text_33() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___Mission_text_33)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Mission_text_33() const { return ___Mission_text_33; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Mission_text_33() { return &___Mission_text_33; }
	inline void set_Mission_text_33(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Mission_text_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Mission_text_33), (void*)value);
	}

	inline static int32_t get_offset_of_Mission_Backimg_34() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___Mission_Backimg_34)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Mission_Backimg_34() const { return ___Mission_Backimg_34; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Mission_Backimg_34() { return &___Mission_Backimg_34; }
	inline void set_Mission_Backimg_34(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Mission_Backimg_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Mission_Backimg_34), (void*)value);
	}

	inline static int32_t get_offset_of_tvButtonMgr_35() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___tvButtonMgr_35)); }
	inline TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C * get_tvButtonMgr_35() const { return ___tvButtonMgr_35; }
	inline TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C ** get_address_of_tvButtonMgr_35() { return &___tvButtonMgr_35; }
	inline void set_tvButtonMgr_35(TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C * value)
	{
		___tvButtonMgr_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tvButtonMgr_35), (void*)value);
	}

	inline static int32_t get_offset_of_inGameMgr_36() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___inGameMgr_36)); }
	inline InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 * get_inGameMgr_36() const { return ___inGameMgr_36; }
	inline InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 ** get_address_of_inGameMgr_36() { return &___inGameMgr_36; }
	inline void set_inGameMgr_36(InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 * value)
	{
		___inGameMgr_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inGameMgr_36), (void*)value);
	}

	inline static int32_t get_offset_of_teacherMgr_37() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___teacherMgr_37)); }
	inline TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E * get_teacherMgr_37() const { return ___teacherMgr_37; }
	inline TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E ** get_address_of_teacherMgr_37() { return &___teacherMgr_37; }
	inline void set_teacherMgr_37(TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E * value)
	{
		___teacherMgr_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___teacherMgr_37), (void*)value);
	}

	inline static int32_t get_offset_of_tvDifficultyData_38() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___tvDifficultyData_38)); }
	inline DifficultyData_tB1A89BA060411BADB493F4CAA1D05880D1F2C4F2 * get_tvDifficultyData_38() const { return ___tvDifficultyData_38; }
	inline DifficultyData_tB1A89BA060411BADB493F4CAA1D05880D1F2C4F2 ** get_address_of_tvDifficultyData_38() { return &___tvDifficultyData_38; }
	inline void set_tvDifficultyData_38(DifficultyData_tB1A89BA060411BADB493F4CAA1D05880D1F2C4F2 * value)
	{
		___tvDifficultyData_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tvDifficultyData_38), (void*)value);
	}

	inline static int32_t get_offset_of_dataMgr_39() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___dataMgr_39)); }
	inline DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * get_dataMgr_39() const { return ___dataMgr_39; }
	inline DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 ** get_address_of_dataMgr_39() { return &___dataMgr_39; }
	inline void set_dataMgr_39(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * value)
	{
		___dataMgr_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataMgr_39), (void*)value);
	}

	inline static int32_t get_offset_of_endurColorMgr_40() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___endurColorMgr_40)); }
	inline SliderColorMgr_t8690AB1B9F806F42AD0A9B9101BC259802451428 * get_endurColorMgr_40() const { return ___endurColorMgr_40; }
	inline SliderColorMgr_t8690AB1B9F806F42AD0A9B9101BC259802451428 ** get_address_of_endurColorMgr_40() { return &___endurColorMgr_40; }
	inline void set_endurColorMgr_40(SliderColorMgr_t8690AB1B9F806F42AD0A9B9101BC259802451428 * value)
	{
		___endurColorMgr_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endurColorMgr_40), (void*)value);
	}

	inline static int32_t get_offset_of_coinMgr_41() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___coinMgr_41)); }
	inline CoinMgr_tD1020715095479E870A6900CD7EB3FEB6799CF50 * get_coinMgr_41() const { return ___coinMgr_41; }
	inline CoinMgr_tD1020715095479E870A6900CD7EB3FEB6799CF50 ** get_address_of_coinMgr_41() { return &___coinMgr_41; }
	inline void set_coinMgr_41(CoinMgr_tD1020715095479E870A6900CD7EB3FEB6799CF50 * value)
	{
		___coinMgr_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coinMgr_41), (void*)value);
	}

	inline static int32_t get_offset_of_itemMgr_42() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___itemMgr_42)); }
	inline ItemMgr_t7E210A71B7FC2B9D76B7FD54A59ACE50E5A33D85 * get_itemMgr_42() const { return ___itemMgr_42; }
	inline ItemMgr_t7E210A71B7FC2B9D76B7FD54A59ACE50E5A33D85 ** get_address_of_itemMgr_42() { return &___itemMgr_42; }
	inline void set_itemMgr_42(ItemMgr_t7E210A71B7FC2B9D76B7FD54A59ACE50E5A33D85 * value)
	{
		___itemMgr_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemMgr_42), (void*)value);
	}

	inline static int32_t get_offset_of_tutorialMgr_43() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___tutorialMgr_43)); }
	inline TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * get_tutorialMgr_43() const { return ___tutorialMgr_43; }
	inline TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD ** get_address_of_tutorialMgr_43() { return &___tutorialMgr_43; }
	inline void set_tutorialMgr_43(TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * value)
	{
		___tutorialMgr_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tutorialMgr_43), (void*)value);
	}

	inline static int32_t get_offset_of_option_44() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___option_44)); }
	inline Option_t4668F0CFD50CE7253A226099157E10033328C0E7 * get_option_44() const { return ___option_44; }
	inline Option_t4668F0CFD50CE7253A226099157E10033328C0E7 ** get_address_of_option_44() { return &___option_44; }
	inline void set_option_44(Option_t4668F0CFD50CE7253A226099157E10033328C0E7 * value)
	{
		___option_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___option_44), (void*)value);
	}

	inline static int32_t get_offset_of_leaderboardMgr_45() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___leaderboardMgr_45)); }
	inline LeaderboardMgr_t06FB7DCB727FC61741D924E64778B02D72724305 * get_leaderboardMgr_45() const { return ___leaderboardMgr_45; }
	inline LeaderboardMgr_t06FB7DCB727FC61741D924E64778B02D72724305 ** get_address_of_leaderboardMgr_45() { return &___leaderboardMgr_45; }
	inline void set_leaderboardMgr_45(LeaderboardMgr_t06FB7DCB727FC61741D924E64778B02D72724305 * value)
	{
		___leaderboardMgr_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leaderboardMgr_45), (void*)value);
	}

	inline static int32_t get_offset_of_levelMgr_46() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___levelMgr_46)); }
	inline LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503 * get_levelMgr_46() const { return ___levelMgr_46; }
	inline LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503 ** get_address_of_levelMgr_46() { return &___levelMgr_46; }
	inline void set_levelMgr_46(LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503 * value)
	{
		___levelMgr_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelMgr_46), (void*)value);
	}

	inline static int32_t get_offset_of_Endur_gageMove_47() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___Endur_gageMove_47)); }
	inline GageMove_t12372F686CA9F6984B88FD2B0CE2704AA1CC9969 * get_Endur_gageMove_47() const { return ___Endur_gageMove_47; }
	inline GageMove_t12372F686CA9F6984B88FD2B0CE2704AA1CC9969 ** get_address_of_Endur_gageMove_47() { return &___Endur_gageMove_47; }
	inline void set_Endur_gageMove_47(GageMove_t12372F686CA9F6984B88FD2B0CE2704AA1CC9969 * value)
	{
		___Endur_gageMove_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Endur_gageMove_47), (void*)value);
	}

	inline static int32_t get_offset_of_GameOver_Menu_48() { return static_cast<int32_t>(offsetof(TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0, ___GameOver_Menu_48)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_GameOver_Menu_48() const { return ___GameOver_Menu_48; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_GameOver_Menu_48() { return &___GameOver_Menu_48; }
	inline void set_GameOver_Menu_48(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___GameOver_Menu_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameOver_Menu_48), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityAdsMgr
struct  UnityAdsMgr_t33D8DE69F0F8B22831767D5376841535472C3BC0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// AdManager UnityAdsMgr::adManager
	AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * ___adManager_4;
	// MainSceneMgr UnityAdsMgr::mainSceneMgr
	MainSceneMgr_t343ABFBEB84190D4CB9232C310D5ADD6CC0E5117 * ___mainSceneMgr_5;
	// System.String UnityAdsMgr::gameID
	String_t* ___gameID_6;
	// System.String UnityAdsMgr::myPlacementId
	String_t* ___myPlacementId_7;
	// System.Boolean UnityAdsMgr::testMode
	bool ___testMode_8;

public:
	inline static int32_t get_offset_of_adManager_4() { return static_cast<int32_t>(offsetof(UnityAdsMgr_t33D8DE69F0F8B22831767D5376841535472C3BC0, ___adManager_4)); }
	inline AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * get_adManager_4() const { return ___adManager_4; }
	inline AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 ** get_address_of_adManager_4() { return &___adManager_4; }
	inline void set_adManager_4(AdManager_tAAF35B6E920E54303B2EAC3F3096D40E666A6AF8 * value)
	{
		___adManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_mainSceneMgr_5() { return static_cast<int32_t>(offsetof(UnityAdsMgr_t33D8DE69F0F8B22831767D5376841535472C3BC0, ___mainSceneMgr_5)); }
	inline MainSceneMgr_t343ABFBEB84190D4CB9232C310D5ADD6CC0E5117 * get_mainSceneMgr_5() const { return ___mainSceneMgr_5; }
	inline MainSceneMgr_t343ABFBEB84190D4CB9232C310D5ADD6CC0E5117 ** get_address_of_mainSceneMgr_5() { return &___mainSceneMgr_5; }
	inline void set_mainSceneMgr_5(MainSceneMgr_t343ABFBEB84190D4CB9232C310D5ADD6CC0E5117 * value)
	{
		___mainSceneMgr_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainSceneMgr_5), (void*)value);
	}

	inline static int32_t get_offset_of_gameID_6() { return static_cast<int32_t>(offsetof(UnityAdsMgr_t33D8DE69F0F8B22831767D5376841535472C3BC0, ___gameID_6)); }
	inline String_t* get_gameID_6() const { return ___gameID_6; }
	inline String_t** get_address_of_gameID_6() { return &___gameID_6; }
	inline void set_gameID_6(String_t* value)
	{
		___gameID_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameID_6), (void*)value);
	}

	inline static int32_t get_offset_of_myPlacementId_7() { return static_cast<int32_t>(offsetof(UnityAdsMgr_t33D8DE69F0F8B22831767D5376841535472C3BC0, ___myPlacementId_7)); }
	inline String_t* get_myPlacementId_7() const { return ___myPlacementId_7; }
	inline String_t** get_address_of_myPlacementId_7() { return &___myPlacementId_7; }
	inline void set_myPlacementId_7(String_t* value)
	{
		___myPlacementId_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myPlacementId_7), (void*)value);
	}

	inline static int32_t get_offset_of_testMode_8() { return static_cast<int32_t>(offsetof(UnityAdsMgr_t33D8DE69F0F8B22831767D5376841535472C3BC0, ___testMode_8)); }
	inline bool get_testMode_8() const { return ___testMode_8; }
	inline bool* get_address_of_testMode_8() { return &___testMode_8; }
	inline void set_testMode_8(bool value)
	{
		___testMode_8 = value;
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Slider
struct  Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.Image
struct  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// Stat[]
struct StatU5BU5D_t53A480EE91EA338274DD85B6C7F83DC38FCA4573  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Stat_t7D7F6CA2A979BAC8379B551A124960110A6C4426 * m_Items[1];

public:
	inline Stat_t7D7F6CA2A979BAC8379B551A124960110A6C4426 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Stat_t7D7F6CA2A979BAC8379B551A124960110A6C4426 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Stat_t7D7F6CA2A979BAC8379B551A124960110A6C4426 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Stat_t7D7F6CA2A979BAC8379B551A124960110A6C4426 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Stat_t7D7F6CA2A979BAC8379B551A124960110A6C4426 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Stat_t7D7F6CA2A979BAC8379B551A124960110A6C4426 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animation::IsPlaying(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_IsPlaying_mD156265199E5875D1DFABCF82819BC4735E34887 (Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void DataManager::SaveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager_SaveData_m2294AF83CB9BE2E93A0049E8760DCE3C847930BB (DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// UnityEngine.AnimationState UnityEngine.Animation::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD * Animation_get_Item_m1A6478937F31595F94BFE95141C8FEF0D90CA932 (Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationState::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationState_get_time_m116DAEA9256A49DF4E507AD604B2E1975AD86FFC (AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animation::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_m5588607899B9B866117A1477C696076F161BA3D4 (Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator TicketMgr::WaitOpenRTEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TicketMgr_WaitOpenRTEnd_mE99421DFBD8BF01C601F2A3D6C5457D165BDC520 (TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Color::Equals(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Color_Equals_mB531F532B5F7BE6168CFD4A6C89358C16F058D00 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___other0, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// System.Boolean System.Int32::Equals(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4 (int32_t* __this, int32_t ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void TVButtonMgr::PressRemoteCon(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TVButtonMgr_PressRemoteCon_m274B5BC4B3106A412DA6DF7457EACB7078B5FF31 (TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C * __this, int32_t ___command0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_m7A69DE38F96121145BE8108B5AA62C789059F225 (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * __this, float ___time0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m082A05928ED5917AA986FAA6106E79D8446A26F4 (const RuntimeMethod* method);
// System.Boolean System.Single::Equals(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m298A3A849F30B9900813BE6DD98AE6810CDBE914 (float* __this, float ___obj0, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Single DifficultyData::get_Period()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float DifficultyData_get_Period_m60FF181F100735CC03B19588AE00DA8D0FC8C516_inline (DifficultyData_tB1A89BA060411BADB493F4CAA1D05880D1F2C4F2 * __this, const RuntimeMethod* method);
// System.Single[] DifficultyData::get_DecreasePortion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* DifficultyData_get_DecreasePortion_m16DF35F9ABFC1E3F05FB5C55BFAAE344C24A4B22_inline (DifficultyData_tB1A89BA060411BADB493F4CAA1D05880D1F2C4F2 * __this, const RuntimeMethod* method);
// System.Void Stat::ApplyAbility(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stat_ApplyAbility_m69C6EB46C00D472E38EEC1A1462E685BA244E9CC (Stat_t7D7F6CA2A979BAC8379B551A124960110A6C4426 * __this, int32_t* ___value0, const RuntimeMethod* method);
// System.Void GageMove::StartGageMove(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GageMove_StartGageMove_m5C93E2781E4AFF1525019AB84C533161764C248D (GageMove_t12372F686CA9F6984B88FD2B0CE2704AA1CC9969 * __this, int32_t ___startValue0, int32_t ___endValue1, bool ___down2, const RuntimeMethod* method);
// System.Void SliderColorMgr::SetColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderColorMgr_SetColor_mB0D7489172E98DC6B0B9E423451ED4DECB63438F (SliderColorMgr_t8690AB1B9F806F42AD0A9B9101BC259802451428 * __this, int32_t ___percentage0, const RuntimeMethod* method);
// System.Void TvGameMgr::StartDecreaseEndurance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TvGameMgr_StartDecreaseEndurance_m72332E8A693EEE201506B65EBF2AE9160A246AAD (TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * __this, const RuntimeMethod* method);
// System.Void TeacherMgr::StartWaitGameOver(UnityEngine.Animation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeacherMgr_StartWaitGameOver_m4BC88DDDE419CACE3E7647CC4805A1EB7FCF2A8F (TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E * __this, Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * ___ani0, const RuntimeMethod* method);
// System.Void TeacherMgr::TvGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeacherMgr_TvGameOver_m7A0192C969AAE596356DBC9E647AE7289D52EBF6 (TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m3AB89AE7770E06BDB33BF39104BE5C57DF90616B (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.String TvGameMgr::SetPointSpot(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TvGameMgr_SetPointSpot_m198CC275814B4E81B7982A41AE256C8C1C995585 (TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * __this, uint64_t ___score0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1 (const RuntimeMethod* method);
// System.Void UnityEngine.UI.Text::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_fontSize_m0D32489043916BCE64E51E0BDFCC12AC1B829411 (Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void TvGameMgr::StartPlusScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TvGameMgr_StartPlusScore_m818E061BD8B1B890415007FD44C284ADA76ADCEA (TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.Advertisement::IsReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_IsReady_m49F6B27947CEBCEFFB7097347724A2A92529C1BE (String_t* ___placementId0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_m3DF28E16C5D36377E310EB287C589E6F287828B0 (String_t* ___placementId0, const RuntimeMethod* method);
// System.Void GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEBF80A620A94FE40D2596C51F075EEFC2F2265EC (U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * __this, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C (bool* __this, const RuntimeMethod* method);
// GooglePlayGames.BasicApi.VideoCaptureOverlayState GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy::FromVideoCaptureOverlayState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OnCaptureOverlayStateListenerProxy_FromVideoCaptureOverlayState_m4C062F855CDDC03616E9A5B0863B52405DDDDD53 (int32_t ___overlayState0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TicketMgr/<WaitOpenRTEnd>d__35::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitOpenRTEndU3Ed__35__ctor_m9CBF2C9ECB666643CE7800AD3785DAAC5566BDBF (U3CWaitOpenRTEndU3Ed__35_t09256C88893E983105BE0ECEE7541E8C34781AB2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TicketMgr/<WaitOpenRTEnd>d__35::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitOpenRTEndU3Ed__35_System_IDisposable_Dispose_mFC58C23C42A0A3FF5EB71741E2DF13D00811F9D3 (U3CWaitOpenRTEndU3Ed__35_t09256C88893E983105BE0ECEE7541E8C34781AB2 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TicketMgr/<WaitOpenRTEnd>d__35::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitOpenRTEndU3Ed__35_MoveNext_m296389DEB7AF50E58226B8514D0A4C7E3DE255A2 (U3CWaitOpenRTEndU3Ed__35_t09256C88893E983105BE0ECEE7541E8C34781AB2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BackkeyMgr_t3215C98AD2E7EFE9AA62C0171B32DEEFB4239C45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1E6A62819FC0D3ADAEC17F7AC0ACE7C8F09E2D4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_003b;
	}

IL_0020:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_4 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0034:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_003b:
	{
		// while(ItemAppear_ani.IsPlaying("ItemAppear"))
		TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2 * L_5 = V_1;
		NullCheck(L_5);
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_6 = L_5->get_ItemAppear_ani_15();
		NullCheck(L_6);
		bool L_7;
		L_7 = Animation_IsPlaying_mD156265199E5875D1DFABCF82819BC4735E34887(L_6, _stringLiteralA1E6A62819FC0D3ADAEC17F7AC0ACE7C8F09E2D4, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0020;
		}
	}
	{
		// BackkeyMgr.backEnabled = true;
		IL2CPP_RUNTIME_CLASS_INIT(BackkeyMgr_t3215C98AD2E7EFE9AA62C0171B32DEEFB4239C45_il2cpp_TypeInfo_var);
		((BackkeyMgr_t3215C98AD2E7EFE9AA62C0171B32DEEFB4239C45_StaticFields*)il2cpp_codegen_static_fields_for(BackkeyMgr_t3215C98AD2E7EFE9AA62C0171B32DEEFB4239C45_il2cpp_TypeInfo_var))->set_backEnabled_5((bool)1);
		// dataManager.SaveData();
		TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2 * L_8 = V_1;
		NullCheck(L_8);
		DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * L_9 = L_8->get_dataManager_7();
		NullCheck(L_9);
		DataManager_SaveData_m2294AF83CB9BE2E93A0049E8760DCE3C847930BB(L_9, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object TicketMgr/<WaitOpenRTEnd>d__35::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitOpenRTEndU3Ed__35_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3A2AADB2354BAD56CFCA2BF34B038A2B446D974E (U3CWaitOpenRTEndU3Ed__35_t09256C88893E983105BE0ECEE7541E8C34781AB2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TicketMgr/<WaitOpenRTEnd>d__35::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitOpenRTEndU3Ed__35_System_Collections_IEnumerator_Reset_m220CE47341D46D6551A09266ED47ADA0971314AA (U3CWaitOpenRTEndU3Ed__35_t09256C88893E983105BE0ECEE7541E8C34781AB2 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitOpenRTEndU3Ed__35_System_Collections_IEnumerator_Reset_m220CE47341D46D6551A09266ED47ADA0971314AA_RuntimeMethod_var)));
	}
}
// System.Object TicketMgr/<WaitOpenRTEnd>d__35::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitOpenRTEndU3Ed__35_System_Collections_IEnumerator_get_Current_m086FBCD0EED0CB09963AD2A1435D5E86702C45A9 (U3CWaitOpenRTEndU3Ed__35_t09256C88893E983105BE0ECEE7541E8C34781AB2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TicketMgr/<WaitRandomItemAni>d__34::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitRandomItemAniU3Ed__34__ctor_m5555CD8ABCEDA86C80622E72A102CFAE2C4ADA80 (U3CWaitRandomItemAniU3Ed__34_t1EC3118B981CF50990B4B7A9CE62F24B5E4005D0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TicketMgr/<WaitRandomItemAni>d__34::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitRandomItemAniU3Ed__34_System_IDisposable_Dispose_m366F813526A6C9E6CE2024AFCA496D6AA847BD56 (U3CWaitRandomItemAniU3Ed__34_t1EC3118B981CF50990B4B7A9CE62F24B5E4005D0 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TicketMgr/<WaitRandomItemAni>d__34::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitRandomItemAniU3Ed__34_MoveNext_m002CBD8668FC7109D83E6714CB77C3221196DD03 (U3CWaitRandomItemAniU3Ed__34_t1EC3118B981CF50990B4B7A9CE62F24B5E4005D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B08003E3F63B5535A81BFBD1D1DF13C08E085A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE44B4B90DD2950B7D9824B4C0EF144616EEE1442);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_008d;
	}

IL_0020:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_4 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0034:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if ((OpenRandomItem_ani["TicketOpen"].time > 0.92f || OpenRandomItem_ani["TicketOpen(High)"].time > 0.92f) && !soundPrinted)
		TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2 * L_5 = V_1;
		NullCheck(L_5);
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_6 = L_5->get_OpenRandomItem_ani_14();
		NullCheck(L_6);
		AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD * L_7;
		L_7 = Animation_get_Item_m1A6478937F31595F94BFE95141C8FEF0D90CA932(L_6, _stringLiteral7B08003E3F63B5535A81BFBD1D1DF13C08E085A7, /*hidden argument*/NULL);
		NullCheck(L_7);
		float L_8;
		L_8 = AnimationState_get_time_m116DAEA9256A49DF4E507AD604B2E1975AD86FFC(L_7, /*hidden argument*/NULL);
		if ((((float)L_8) > ((float)(0.920000017f))))
		{
			goto IL_0073;
		}
	}
	{
		TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2 * L_9 = V_1;
		NullCheck(L_9);
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_10 = L_9->get_OpenRandomItem_ani_14();
		NullCheck(L_10);
		AnimationState_tDB7088046A65ABCEC66B45147693CA0AD803A3AD * L_11;
		L_11 = Animation_get_Item_m1A6478937F31595F94BFE95141C8FEF0D90CA932(L_10, _stringLiteralE44B4B90DD2950B7D9824B4C0EF144616EEE1442, /*hidden argument*/NULL);
		NullCheck(L_11);
		float L_12;
		L_12 = AnimationState_get_time_m116DAEA9256A49DF4E507AD604B2E1975AD86FFC(L_11, /*hidden argument*/NULL);
		if ((!(((float)L_12) > ((float)(0.920000017f)))))
		{
			goto IL_008d;
		}
	}

IL_0073:
	{
		TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2 * L_13 = V_1;
		NullCheck(L_13);
		bool L_14 = L_13->get_soundPrinted_35();
		if (L_14)
		{
			goto IL_008d;
		}
	}
	{
		// RandomTicket_AS.Play();
		TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2 * L_15 = V_1;
		NullCheck(L_15);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_16 = L_15->get_RandomTicket_AS_17();
		NullCheck(L_16);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_16, /*hidden argument*/NULL);
		// soundPrinted = true;
		TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2 * L_17 = V_1;
		NullCheck(L_17);
		L_17->set_soundPrinted_35((bool)1);
	}

IL_008d:
	{
		// while (OpenRandomItem_ani.IsPlaying("TicketOpen") || OpenRandomItem_ani.IsPlaying("TicketOpen(High)"))
		TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2 * L_18 = V_1;
		NullCheck(L_18);
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_19 = L_18->get_OpenRandomItem_ani_14();
		NullCheck(L_19);
		bool L_20;
		L_20 = Animation_IsPlaying_mD156265199E5875D1DFABCF82819BC4735E34887(L_19, _stringLiteral7B08003E3F63B5535A81BFBD1D1DF13C08E085A7, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_0020;
		}
	}
	{
		TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2 * L_21 = V_1;
		NullCheck(L_21);
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_22 = L_21->get_OpenRandomItem_ani_14();
		NullCheck(L_22);
		bool L_23;
		L_23 = Animation_IsPlaying_mD156265199E5875D1DFABCF82819BC4735E34887(L_22, _stringLiteralE44B4B90DD2950B7D9824B4C0EF144616EEE1442, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_0020;
		}
	}
	{
		// soundPrinted = false;
		TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2 * L_24 = V_1;
		NullCheck(L_24);
		L_24->set_soundPrinted_35((bool)0);
		// ItemAppear_ani.Play();
		TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2 * L_25 = V_1;
		NullCheck(L_25);
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_26 = L_25->get_ItemAppear_ani_15();
		NullCheck(L_26);
		bool L_27;
		L_27 = Animation_Play_m5588607899B9B866117A1477C696076F161BA3D4(L_26, /*hidden argument*/NULL);
		// ItemNameAppear_ani.Play();
		TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2 * L_28 = V_1;
		NullCheck(L_28);
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_29 = L_28->get_ItemNameAppear_ani_16();
		NullCheck(L_29);
		bool L_30;
		L_30 = Animation_Play_m5588607899B9B866117A1477C696076F161BA3D4(L_29, /*hidden argument*/NULL);
		// StartCoroutine(WaitOpenRTEnd());
		TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2 * L_31 = V_1;
		TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2 * L_32 = V_1;
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = TicketMgr_WaitOpenRTEnd_mE99421DFBD8BF01C601F2A3D6C5457D165BDC520(L_32, /*hidden argument*/NULL);
		NullCheck(L_31);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_34;
		L_34 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_31, L_33, /*hidden argument*/NULL);
		// Reset_button.SetActive(true);
		TicketMgr_t295A164D2E73121006900C00BD71A8FEB23D11C2 * L_35 = V_1;
		NullCheck(L_35);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = L_35->get_Reset_button_11();
		NullCheck(L_36);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_36, (bool)1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object TicketMgr/<WaitRandomItemAni>d__34::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitRandomItemAniU3Ed__34_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m556C1CFD4C7FA660A8AA71D1DAC7E3BD5E3367CE (U3CWaitRandomItemAniU3Ed__34_t1EC3118B981CF50990B4B7A9CE62F24B5E4005D0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TicketMgr/<WaitRandomItemAni>d__34::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitRandomItemAniU3Ed__34_System_Collections_IEnumerator_Reset_m9F49DA323374C3878EFD8EF481CB3712A5B45A52 (U3CWaitRandomItemAniU3Ed__34_t1EC3118B981CF50990B4B7A9CE62F24B5E4005D0 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitRandomItemAniU3Ed__34_System_Collections_IEnumerator_Reset_m9F49DA323374C3878EFD8EF481CB3712A5B45A52_RuntimeMethod_var)));
	}
}
// System.Object TicketMgr/<WaitRandomItemAni>d__34::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitRandomItemAniU3Ed__34_System_Collections_IEnumerator_get_Current_m9BE400B922AF8B25C36AC4023BC5EFC8C6EB0020 (U3CWaitRandomItemAniU3Ed__34_t1EC3118B981CF50990B4B7A9CE62F24B5E4005D0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TutorialMgr/<WaitAfterContinue>d__51::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAfterContinueU3Ed__51__ctor_mE2EDBC4F5A5B248DC25A3A536C4699A257FE852F (U3CWaitAfterContinueU3Ed__51_t4AE026D29B7CB32199323462CA02BE95DA070C19 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TutorialMgr/<WaitAfterContinue>d__51::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAfterContinueU3Ed__51_System_IDisposable_Dispose_m6370800D6E6531EE28A5A7748950041128B04879 (U3CWaitAfterContinueU3Ed__51_t4AE026D29B7CB32199323462CA02BE95DA070C19 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TutorialMgr/<WaitAfterContinue>d__51::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitAfterContinueU3Ed__51_MoveNext_mB57C079F969E928F97333CF9A8113A640CDE620A (U3CWaitAfterContinueU3Ed__51_t4AE026D29B7CB32199323462CA02BE95DA070C19 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * V_1 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_003b;
	}

IL_0020:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_4 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0034:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_003b:
	{
		// while (!teacherMgr.Teacher_img.color.Equals(teacherMgr.Green))
		TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * L_5 = V_1;
		NullCheck(L_5);
		TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E * L_6 = L_5->get_teacherMgr_15();
		NullCheck(L_6);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_7 = L_6->get_Teacher_img_5();
		NullCheck(L_7);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8;
		L_8 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_7);
		V_2 = L_8;
		TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * L_9 = V_1;
		NullCheck(L_9);
		TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E * L_10 = L_9->get_teacherMgr_15();
		NullCheck(L_10);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11 = L_10->get_Green_6();
		bool L_12;
		L_12 = Color_Equals_mB531F532B5F7BE6168CFD4A6C89358C16F058D00((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(&V_2), L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0020;
		}
	}
	{
		// teacherMgr.TestMode = false;
		TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * L_13 = V_1;
		NullCheck(L_13);
		TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E * L_14 = L_13->get_teacherMgr_15();
		NullCheck(L_14);
		L_14->set_TestMode_38((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object TutorialMgr/<WaitAfterContinue>d__51::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitAfterContinueU3Ed__51_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m39BEBF5B271D8AA7A24C0BDE25DA3EBB2E9E5F3A (U3CWaitAfterContinueU3Ed__51_t4AE026D29B7CB32199323462CA02BE95DA070C19 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TutorialMgr/<WaitAfterContinue>d__51::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAfterContinueU3Ed__51_System_Collections_IEnumerator_Reset_m6AA2F8A922B6A6E63346E15625F3E4EE4E3984D1 (U3CWaitAfterContinueU3Ed__51_t4AE026D29B7CB32199323462CA02BE95DA070C19 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitAfterContinueU3Ed__51_System_Collections_IEnumerator_Reset_m6AA2F8A922B6A6E63346E15625F3E4EE4E3984D1_RuntimeMethod_var)));
	}
}
// System.Object TutorialMgr/<WaitAfterContinue>d__51::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitAfterContinueU3Ed__51_System_Collections_IEnumerator_get_Current_m0ACD2B7B31A1AA7E79F693156D6B184094B3929E (U3CWaitAfterContinueU3Ed__51_t4AE026D29B7CB32199323462CA02BE95DA070C19 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TutorialMgr/<WaitColorChange>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitColorChangeU3Ed__24__ctor_m4BE0D6DA186825FAEB50202079271001AB064C24 (U3CWaitColorChangeU3Ed__24_t671C1DA756B52989A8A8913A50638F87E198AB86 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TutorialMgr/<WaitColorChange>d__24::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitColorChangeU3Ed__24_System_IDisposable_Dispose_m8C62BD7BCA6BB163DCFA8BB5F013962CA731FC1E (U3CWaitColorChangeU3Ed__24_t671C1DA756B52989A8A8913A50638F87E198AB86 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TutorialMgr/<WaitColorChange>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitColorChangeU3Ed__24_MoveNext_m98EEAC2F03173BBEBB2C7AFE106101D66FB16B54 (U3CWaitColorChangeU3Ed__24_t671C1DA756B52989A8A8913A50638F87E198AB86 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2375165D26BB55F57D2F81F646CDE703E7803615);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6C0ECB9431B19E08F6B2DB28C72765B3EE30A7F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * V_1 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0051;
			}
			case 2:
			{
				goto IL_00d8;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if(color.Equals("orange"))
		String_t* L_3 = __this->get_color_2();
		NullCheck(L_3);
		bool L_4;
		L_4 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_3, _stringLiteralA6C0ECB9431B19E08F6B2DB28C72765B3EE30A7F, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_00ad;
		}
	}
	{
		goto IL_0058;
	}

IL_003d:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_5 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0051:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0058:
	{
		// while(!teacherMgr.Teacher_img.color.Equals(teacherMgr.Orange))
		TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * L_6 = V_1;
		NullCheck(L_6);
		TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E * L_7 = L_6->get_teacherMgr_15();
		NullCheck(L_7);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8 = L_7->get_Teacher_img_5();
		NullCheck(L_8);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9;
		L_9 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_8);
		V_2 = L_9;
		TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * L_10 = V_1;
		NullCheck(L_10);
		TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E * L_11 = L_10->get_teacherMgr_15();
		NullCheck(L_11);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12 = L_11->get_Orange_8();
		bool L_13;
		L_13 = Color_Equals_mB531F532B5F7BE6168CFD4A6C89358C16F058D00((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(&V_2), L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_003d;
		}
	}
	{
		// Game_tutorial[explainStep-1].SetActive(true);
		TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * L_14 = V_1;
		NullCheck(L_14);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_15 = L_14->get_Game_tutorial_10();
		TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17 = L_16->get_explainStep_17();
		NullCheck(L_15);
		int32_t L_18 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_19, (bool)1, /*hidden argument*/NULL);
		// Time.timeScale = 0.0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// inGameMgr.isPause = true;
		TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * L_20 = V_1;
		NullCheck(L_20);
		InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 * L_21 = L_20->get_inGameMgr_13();
		NullCheck(L_21);
		L_21->set_isPause_6((bool)1);
		// }
		goto IL_0149;
	}

IL_00ad:
	{
		// else if(color.Equals("green"))
		String_t* L_22 = __this->get_color_2();
		NullCheck(L_22);
		bool L_23;
		L_23 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_22, _stringLiteral2375165D26BB55F57D2F81F646CDE703E7803615, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0149;
		}
	}
	{
		goto IL_00df;
	}

IL_00c4:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_24 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_24, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_24);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00d8:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00df:
	{
		// while(!teacherMgr.Teacher_img.color.Equals(teacherMgr.Green))
		TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * L_25 = V_1;
		NullCheck(L_25);
		TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E * L_26 = L_25->get_teacherMgr_15();
		NullCheck(L_26);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_27 = L_26->get_Teacher_img_5();
		NullCheck(L_27);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_28;
		L_28 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_27);
		V_2 = L_28;
		TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * L_29 = V_1;
		NullCheck(L_29);
		TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E * L_30 = L_29->get_teacherMgr_15();
		NullCheck(L_30);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_31 = L_30->get_Green_6();
		bool L_32;
		L_32 = Color_Equals_mB531F532B5F7BE6168CFD4A6C89358C16F058D00((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(&V_2), L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00c4;
		}
	}
	{
		// Game_tutorial[explainStep-1].SetActive(true);
		TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * L_33 = V_1;
		NullCheck(L_33);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_34 = L_33->get_Game_tutorial_10();
		TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * L_35 = V_1;
		NullCheck(L_35);
		int32_t L_36 = L_35->get_explainStep_17();
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)1));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_38);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_38, (bool)1, /*hidden argument*/NULL);
		// Time.timeScale = 0.0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// inGameMgr.isPause = true;
		TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * L_39 = V_1;
		NullCheck(L_39);
		InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 * L_40 = L_39->get_inGameMgr_13();
		NullCheck(L_40);
		L_40->set_isPause_6((bool)1);
		// if(SceneNumber.Equals(3))
		TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * L_41 = V_1;
		NullCheck(L_41);
		int32_t* L_42 = L_41->get_address_of_SceneNumber_18();
		bool L_43;
		L_43 = Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4((int32_t*)L_42, 3, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_0149;
		}
	}
	{
		// BlockEat.SetActive(false);
		TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * L_44 = V_1;
		NullCheck(L_44);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45 = L_44->get_BlockEat_34();
		NullCheck(L_45);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_45, (bool)0, /*hidden argument*/NULL);
	}

IL_0149:
	{
		// }
		return (bool)0;
	}
}
// System.Object TutorialMgr/<WaitColorChange>d__24::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitColorChangeU3Ed__24_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAC42B539E2DB1C8D4E3C65735300F818B457AD00 (U3CWaitColorChangeU3Ed__24_t671C1DA756B52989A8A8913A50638F87E198AB86 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TutorialMgr/<WaitColorChange>d__24::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitColorChangeU3Ed__24_System_Collections_IEnumerator_Reset_mD942941084529972D1E058EFEEE83593AB70D106 (U3CWaitColorChangeU3Ed__24_t671C1DA756B52989A8A8913A50638F87E198AB86 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitColorChangeU3Ed__24_System_Collections_IEnumerator_Reset_mD942941084529972D1E058EFEEE83593AB70D106_RuntimeMethod_var)));
	}
}
// System.Object TutorialMgr/<WaitColorChange>d__24::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitColorChangeU3Ed__24_System_Collections_IEnumerator_get_Current_mA26070DA18DE8EDA66EE18F572CB0DAC0C000DC1 (U3CWaitColorChangeU3Ed__24_t671C1DA756B52989A8A8913A50638F87E198AB86 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TutorialMgr/<WaitLightOff>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitLightOffU3Ed__25__ctor_mB1C0E217BDDA5A157F0C008C188C71FDBC558FE7 (U3CWaitLightOffU3Ed__25_tA22B97B64769E96CBAA2C74B0ACAF239828B6E41 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TutorialMgr/<WaitLightOff>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitLightOffU3Ed__25_System_IDisposable_Dispose_m584B2D498A8710F019383EF520A4D5F8A5A0683F (U3CWaitLightOffU3Ed__25_tA22B97B64769E96CBAA2C74B0ACAF239828B6E41 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TutorialMgr/<WaitLightOff>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitLightOffU3Ed__25_MoveNext_mE02186E02264A9DAC5FA2D03D10A23DD1A5BA511 (U3CWaitLightOffU3Ed__25_tA22B97B64769E96CBAA2C74B0ACAF239828B6E41 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(time);
		float L_4 = __this->get_time_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// tvButtonMgr.PressRemoteCon(-1);
		TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * L_6 = V_1;
		NullCheck(L_6);
		TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C * L_7 = L_6->get_tvButtonMgr_20();
		NullCheck(L_7);
		TVButtonMgr_PressRemoteCon_m274B5BC4B3106A412DA6DF7457EACB7078B5FF31(L_7, (-1), /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object TutorialMgr/<WaitLightOff>d__25::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitLightOffU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC9DB1A628561AB691512B8515F8E15ECD9E15B9D (U3CWaitLightOffU3Ed__25_tA22B97B64769E96CBAA2C74B0ACAF239828B6E41 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TutorialMgr/<WaitLightOff>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitLightOffU3Ed__25_System_Collections_IEnumerator_Reset_m0394540DBEBEDFAAE77AED7BA44294710045BECB (U3CWaitLightOffU3Ed__25_tA22B97B64769E96CBAA2C74B0ACAF239828B6E41 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitLightOffU3Ed__25_System_Collections_IEnumerator_Reset_m0394540DBEBEDFAAE77AED7BA44294710045BECB_RuntimeMethod_var)));
	}
}
// System.Object TutorialMgr/<WaitLightOff>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitLightOffU3Ed__25_System_Collections_IEnumerator_get_Current_m347008FB358BD9BFA5367DC6C97F66FCAFF19E30 (U3CWaitLightOffU3Ed__25_tA22B97B64769E96CBAA2C74B0ACAF239828B6E41 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TutorialMgr/<WaitResetTime>d__53::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitResetTimeU3Ed__53__ctor_m8597BED75DFD888D220FF3DF62FCC017B0282835 (U3CWaitResetTimeU3Ed__53_t06086594BB5116DE3F360600D32CAAE4606A1A48 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TutorialMgr/<WaitResetTime>d__53::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitResetTimeU3Ed__53_System_IDisposable_Dispose_m253974C5A8DB436BB830542526ED7C9C10970E95 (U3CWaitResetTimeU3Ed__53_t06086594BB5116DE3F360600D32CAAE4606A1A48 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TutorialMgr/<WaitResetTime>d__53::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitResetTimeU3Ed__53_MoveNext_m53501D16E9AAA37EB035732DCA4BCD3F051F44C2 (U3CWaitResetTimeU3Ed__53_t06086594BB5116DE3F360600D32CAAE4606A1A48 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSecondsRealtime(1.5f);
		WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * L_3 = (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 *)il2cpp_codegen_object_new(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var);
		WaitForSecondsRealtime__ctor_m7A69DE38F96121145BE8108B5AA62C789059F225(L_3, (1.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0030:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (Time.timeScale.Equals(0))
		float L_4;
		L_4 = Time_get_timeScale_m082A05928ED5917AA986FAA6106E79D8446A26F4(/*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5;
		L_5 = Single_Equals_m298A3A849F30B9900813BE6DD98AE6810CDBE914((float*)(&V_1), (0.0f), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0055;
		}
	}
	{
		// Time.timeScale = 1.0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
	}

IL_0055:
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_6;
		L_6 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_2 = L_6;
		String_t* L_7;
		L_7 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_2), /*hidden argument*/NULL);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_7, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object TutorialMgr/<WaitResetTime>d__53::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitResetTimeU3Ed__53_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3E77F5C7A4764BAC2F7E37CA21BE9C93327DA320 (U3CWaitResetTimeU3Ed__53_t06086594BB5116DE3F360600D32CAAE4606A1A48 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TutorialMgr/<WaitResetTime>d__53::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitResetTimeU3Ed__53_System_Collections_IEnumerator_Reset_m2556698754BE388BF7CD6BA1556878CA1952E9D1 (U3CWaitResetTimeU3Ed__53_t06086594BB5116DE3F360600D32CAAE4606A1A48 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitResetTimeU3Ed__53_System_Collections_IEnumerator_Reset_m2556698754BE388BF7CD6BA1556878CA1952E9D1_RuntimeMethod_var)));
	}
}
// System.Object TutorialMgr/<WaitResetTime>d__53::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitResetTimeU3Ed__53_System_Collections_IEnumerator_get_Current_m029E374B7F95023A5011903880AF69A68F584D93 (U3CWaitResetTimeU3Ed__53_t06086594BB5116DE3F360600D32CAAE4606A1A48 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TutorialMgr/<WaitforPhoneOn>d__37::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitforPhoneOnU3Ed__37__ctor_mC3C48D4E97DBF09B159A44B1D00D07221C38654A (U3CWaitforPhoneOnU3Ed__37_tA5EF9FE510FB20FAF29F56F16AEE168E8444AAF9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TutorialMgr/<WaitforPhoneOn>d__37::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitforPhoneOnU3Ed__37_System_IDisposable_Dispose_m65E4D61590A88AFA0F5E7250F98DBD972E11BA16 (U3CWaitforPhoneOnU3Ed__37_tA5EF9FE510FB20FAF29F56F16AEE168E8444AAF9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TutorialMgr/<WaitforPhoneOn>d__37::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitforPhoneOnU3Ed__37_MoveNext_mEBA9DAC29334DDA0B8245ABF4837CE99FDBCB227 (U3CWaitforPhoneOnU3Ed__37_tA5EF9FE510FB20FAF29F56F16AEE168E8444AAF9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral808B7558B5F050AABB65AD0B7343729995A2638E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_003b;
	}

IL_0020:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_4 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0034:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_003b:
	{
		// while(phoneConMgr.PhoneOnOff_animation.IsPlaying("OpeningPhone"))
		TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * L_5 = V_1;
		NullCheck(L_5);
		PhoneConMgr_t2DCD786AD522A06EA980DB125E67FA7E65D607F6 * L_6 = L_5->get_phoneConMgr_24();
		NullCheck(L_6);
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_7 = L_6->get_PhoneOnOff_animation_11();
		NullCheck(L_7);
		bool L_8;
		L_8 = Animation_IsPlaying_mD156265199E5875D1DFABCF82819BC4735E34887(L_7, _stringLiteral808B7558B5F050AABB65AD0B7343729995A2638E, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0020;
		}
	}
	{
		// Game_tutorial[explainStep-1].SetActive(true);
		TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * L_9 = V_1;
		NullCheck(L_9);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_10 = L_9->get_Game_tutorial_10();
		TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_explainStep_17();
		NullCheck(L_10);
		int32_t L_13 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_14, (bool)1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object TutorialMgr/<WaitforPhoneOn>d__37::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitforPhoneOnU3Ed__37_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m56C7B90DF0A547488E21416B47D3D1B6A28CED7B (U3CWaitforPhoneOnU3Ed__37_tA5EF9FE510FB20FAF29F56F16AEE168E8444AAF9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TutorialMgr/<WaitforPhoneOn>d__37::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitforPhoneOnU3Ed__37_System_Collections_IEnumerator_Reset_m69AC6F3D74C1434D56AC9C71F03AF122BA3E99A3 (U3CWaitforPhoneOnU3Ed__37_tA5EF9FE510FB20FAF29F56F16AEE168E8444AAF9 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitforPhoneOnU3Ed__37_System_Collections_IEnumerator_Reset_m69AC6F3D74C1434D56AC9C71F03AF122BA3E99A3_RuntimeMethod_var)));
	}
}
// System.Object TutorialMgr/<WaitforPhoneOn>d__37::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitforPhoneOnU3Ed__37_System_Collections_IEnumerator_get_Current_mAD1B26FF09C162A18259563E6C1DAAE05CFCF4A2 (U3CWaitforPhoneOnU3Ed__37_tA5EF9FE510FB20FAF29F56F16AEE168E8444AAF9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TvGameMgr/<CloseMissionImg>d__55::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseMissionImgU3Ed__55__ctor_mC63A0F647ED95812A2CB0546C63B15FC6B313604 (U3CCloseMissionImgU3Ed__55_t3E8B05F0EFE76FF712BFF586E10AD7FEA9E1EFDC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TvGameMgr/<CloseMissionImg>d__55::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseMissionImgU3Ed__55_System_IDisposable_Dispose_mD87959327928F0B7C0FE96606AAB19338CA0ED2E (U3CCloseMissionImgU3Ed__55_t3E8B05F0EFE76FF712BFF586E10AD7FEA9E1EFDC * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TvGameMgr/<CloseMissionImg>d__55::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCloseMissionImgU3Ed__55_MoveNext_m6F51D69C4FD12B137129191E3736B62788C09D58 (U3CCloseMissionImgU3Ed__55_t3E8B05F0EFE76FF712BFF586E10AD7FEA9E1EFDC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(waittime);
		float L_4 = __this->get_waittime_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Mission_Backimg.SetActive(false);
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_6 = V_1;
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = L_6->get_Mission_Backimg_34();
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object TvGameMgr/<CloseMissionImg>d__55::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCloseMissionImgU3Ed__55_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9CAB776F546955C450D6847D863A698D625E9E04 (U3CCloseMissionImgU3Ed__55_t3E8B05F0EFE76FF712BFF586E10AD7FEA9E1EFDC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TvGameMgr/<CloseMissionImg>d__55::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseMissionImgU3Ed__55_System_Collections_IEnumerator_Reset_m526462CF276701BC0759502F93EE32C82296DD28 (U3CCloseMissionImgU3Ed__55_t3E8B05F0EFE76FF712BFF586E10AD7FEA9E1EFDC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCloseMissionImgU3Ed__55_System_Collections_IEnumerator_Reset_m526462CF276701BC0759502F93EE32C82296DD28_RuntimeMethod_var)));
	}
}
// System.Object TvGameMgr/<CloseMissionImg>d__55::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCloseMissionImgU3Ed__55_System_Collections_IEnumerator_get_Current_m18AEA6A25A5FD53CD2A0AF31276BC4C31FC49B99 (U3CCloseMissionImgU3Ed__55_t3E8B05F0EFE76FF712BFF586E10AD7FEA9E1EFDC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TvGameMgr/<DecreaseEndurance>d__50::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDecreaseEnduranceU3Ed__50__ctor_m531283741F023799F2C4937A8EA0B7CB71268D83 (U3CDecreaseEnduranceU3Ed__50_t6EEF1D2655D9B83253EE4A2A73DE10969C6F3C0F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TvGameMgr/<DecreaseEndurance>d__50::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDecreaseEnduranceU3Ed__50_System_IDisposable_Dispose_m707E10F3AB96F687E041E9914156DE4AC2515864 (U3CDecreaseEnduranceU3Ed__50_t6EEF1D2655D9B83253EE4A2A73DE10969C6F3C0F * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TvGameMgr/<DecreaseEndurance>d__50::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDecreaseEnduranceU3Ed__50_MoveNext_m83DF9415AB1740BF74A6F57171D5F07B04AD4332 (U3CDecreaseEnduranceU3Ed__50_t6EEF1D2655D9B83253EE4A2A73DE10969C6F3C0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D66044B1E449F63E6A32359B0F07B35C767E650);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(tvDifficultyData.Period);
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_4 = V_1;
		NullCheck(L_4);
		DifficultyData_tB1A89BA060411BADB493F4CAA1D05880D1F2C4F2 * L_5 = L_4->get_tvDifficultyData_38();
		NullCheck(L_5);
		float L_6;
		L_6 = DifficultyData_get_Period_m60FF181F100735CC03B19588AE00DA8D0FC8C516_inline(L_5, /*hidden argument*/NULL);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_7 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_7, L_6, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// int startValue = Endurance;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_Endurance_5();
		V_2 = L_9;
		// int endurM = (int)(EnduranceMax * tvDifficultyData.DecreasePortion[inGameMgr.stage] * 0.01f);
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_EnduranceMax_6();
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_12 = V_1;
		NullCheck(L_12);
		DifficultyData_tB1A89BA060411BADB493F4CAA1D05880D1F2C4F2 * L_13 = L_12->get_tvDifficultyData_38();
		NullCheck(L_13);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_14;
		L_14 = DifficultyData_get_DecreasePortion_m16DF35F9ABFC1E3F05FB5C55BFAAE344C24A4B22_inline(L_13, /*hidden argument*/NULL);
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_15 = V_1;
		NullCheck(L_15);
		InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 * L_16 = L_15->get_inGameMgr_36();
		NullCheck(L_16);
		int32_t L_17 = L_16->get_stage_16();
		NullCheck(L_14);
		int32_t L_18 = L_17;
		float L_19 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_3 = ((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_11)), (float)L_19)), (float)(0.00999999978f)))));
		// levelMgr.StatArr[2].ApplyAbility(ref endurM);
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_20 = V_1;
		NullCheck(L_20);
		LevelMgr_t2CC7424C129596C85AE993BD776E53930929F503 * L_21 = L_20->get_levelMgr_46();
		NullCheck(L_21);
		StatU5BU5D_t53A480EE91EA338274DD85B6C7F83DC38FCA4573* L_22 = L_21->get_StatArr_10();
		NullCheck(L_22);
		int32_t L_23 = 2;
		Stat_t7D7F6CA2A979BAC8379B551A124960110A6C4426 * L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		Stat_ApplyAbility_m69C6EB46C00D472E38EEC1A1462E685BA244E9CC(L_24, (int32_t*)(&V_3), /*hidden argument*/NULL);
		// Endurance -= endurM;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_25 = V_1;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_26 = V_1;
		NullCheck(L_26);
		int32_t L_27 = L_26->get_Endurance_5();
		int32_t L_28 = V_3;
		NullCheck(L_25);
		L_25->set_Endurance_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)L_28)));
		// if (option.smoothGage)
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_29 = V_1;
		NullCheck(L_29);
		Option_t4668F0CFD50CE7253A226099157E10033328C0E7 * L_30 = L_29->get_option_44();
		NullCheck(L_30);
		bool L_31 = L_30->get_smoothGage_24();
		if (!L_31)
		{
			goto IL_00b6;
		}
	}
	{
		// Endur_gageMove.StartGageMove(startValue, Endurance, true);
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_32 = V_1;
		NullCheck(L_32);
		GageMove_t12372F686CA9F6984B88FD2B0CE2704AA1CC9969 * L_33 = L_32->get_Endur_gageMove_47();
		int32_t L_34 = V_2;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_35 = V_1;
		NullCheck(L_35);
		int32_t L_36 = L_35->get_Endurance_5();
		NullCheck(L_33);
		GageMove_StartGageMove_m5C93E2781E4AFF1525019AB84C533161764C248D(L_33, L_34, L_36, (bool)1, /*hidden argument*/NULL);
		goto IL_00cb;
	}

IL_00b6:
	{
		// Endurance_slider.value = Endurance * 10;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_37 = V_1;
		NullCheck(L_37);
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_38 = L_37->get_Endurance_slider_26();
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_39 = V_1;
		NullCheck(L_39);
		int32_t L_40 = L_39->get_Endurance_5();
		NullCheck(L_38);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_38, ((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_40, (int32_t)((int32_t)10))))));
	}

IL_00cb:
	{
		// int percentage = Endurance * 100 / EnduranceMax;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_41 = V_1;
		NullCheck(L_41);
		int32_t L_42 = L_41->get_Endurance_5();
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_43 = V_1;
		NullCheck(L_43);
		int32_t L_44 = L_43->get_EnduranceMax_6();
		V_4 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_42, (int32_t)((int32_t)100)))/(int32_t)L_44));
		// endurColorMgr.SetColor(percentage);
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_45 = V_1;
		NullCheck(L_45);
		SliderColorMgr_t8690AB1B9F806F42AD0A9B9101BC259802451428 * L_46 = L_45->get_endurColorMgr_40();
		int32_t L_47 = V_4;
		NullCheck(L_46);
		SliderColorMgr_SetColor_mB0D7489172E98DC6B0B9E423451ED4DECB63438F(L_46, L_47, /*hidden argument*/NULL);
		// if (!tvButtonMgr.isTvOn && inGameMgr.IsPlayingGame && Endurance > 0)
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_48 = V_1;
		NullCheck(L_48);
		TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C * L_49 = L_48->get_tvButtonMgr_35();
		NullCheck(L_49);
		bool L_50 = L_49->get_isTvOn_18();
		if (L_50)
		{
			goto IL_0118;
		}
	}
	{
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_51 = V_1;
		NullCheck(L_51);
		InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 * L_52 = L_51->get_inGameMgr_36();
		NullCheck(L_52);
		bool L_53 = L_52->get_IsPlayingGame_4();
		if (!L_53)
		{
			goto IL_0118;
		}
	}
	{
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_54 = V_1;
		NullCheck(L_54);
		int32_t L_55 = L_54->get_Endurance_5();
		if ((((int32_t)L_55) <= ((int32_t)0)))
		{
			goto IL_0118;
		}
	}
	{
		// StartDecreaseEndurance();
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_56 = V_1;
		NullCheck(L_56);
		TvGameMgr_StartDecreaseEndurance_m72332E8A693EEE201506B65EBF2AE9160A246AAD(L_56, /*hidden argument*/NULL);
		goto IL_01fc;
	}

IL_0118:
	{
		// else if (Endurance <= 0 && !teacherMgr.TestMode)
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_57 = V_1;
		NullCheck(L_57);
		int32_t L_58 = L_57->get_Endurance_5();
		if ((((int32_t)L_58) > ((int32_t)0)))
		{
			goto IL_01fc;
		}
	}
	{
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_59 = V_1;
		NullCheck(L_59);
		TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E * L_60 = L_59->get_teacherMgr_37();
		NullCheck(L_60);
		bool L_61 = L_60->get_TestMode_38();
		if (L_61)
		{
			goto IL_01fc;
		}
	}
	{
		// if (!tutorialMgr.isTutorialOn)
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_62 = V_1;
		NullCheck(L_62);
		TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * L_63 = L_62->get_tutorialMgr_43();
		NullCheck(L_63);
		bool L_64 = L_63->get_isTutorialOn_4();
		if (L_64)
		{
			goto IL_01a7;
		}
	}
	{
		// if (inGameMgr.IsPlayingGame)//중복 게임 오버 방지
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_65 = V_1;
		NullCheck(L_65);
		InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 * L_66 = L_65->get_inGameMgr_36();
		NullCheck(L_66);
		bool L_67 = L_66->get_IsPlayingGame_4();
		if (!L_67)
		{
			goto IL_01fc;
		}
	}
	{
		// teacherMgr.NormalCon.SetActive(false);
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_68 = V_1;
		NullCheck(L_68);
		TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E * L_69 = L_68->get_teacherMgr_37();
		NullCheck(L_69);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_70 = L_69->get_NormalCon_16();
		NullCheck(L_70);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_70, (bool)0, /*hidden argument*/NULL);
		// teacherMgr.GameOverCon.SetActive(true);
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_71 = V_1;
		NullCheck(L_71);
		TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E * L_72 = L_71->get_teacherMgr_37();
		NullCheck(L_72);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_73 = L_72->get_GameOverCon_18();
		NullCheck(L_73);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_73, (bool)1, /*hidden argument*/NULL);
		// teacherMgr.GameOverBySleep.SetActive(true);
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_74 = V_1;
		NullCheck(L_74);
		TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E * L_75 = L_74->get_teacherMgr_37();
		NullCheck(L_75);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_76 = L_75->get_GameOverBySleep_20();
		NullCheck(L_76);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_76, (bool)1, /*hidden argument*/NULL);
		// teacherMgr.StartWaitGameOver(teacherMgr.GameOverBySleep_ani);
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_77 = V_1;
		NullCheck(L_77);
		TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E * L_78 = L_77->get_teacherMgr_37();
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_79 = V_1;
		NullCheck(L_79);
		TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E * L_80 = L_79->get_teacherMgr_37();
		NullCheck(L_80);
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_81 = L_80->get_GameOverBySleep_ani_22();
		NullCheck(L_78);
		TeacherMgr_StartWaitGameOver_m4BC88DDDE419CACE3E7647CC4805A1EB7FCF2A8F(L_78, L_81, /*hidden argument*/NULL);
		// teacherMgr.TvGameOver();
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_82 = V_1;
		NullCheck(L_82);
		TeacherMgr_tF58CB4071A139A81AA3751BC8BABD80F2069139E * L_83 = L_82->get_teacherMgr_37();
		NullCheck(L_83);
		TeacherMgr_TvGameOver_m7A0192C969AAE596356DBC9E647AE7289D52EBF6(L_83, /*hidden argument*/NULL);
		// }
		goto IL_01fc;
	}

IL_01a7:
	{
		// if (!tutorialMgr.gameovered_endurance)
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_84 = V_1;
		NullCheck(L_84);
		TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * L_85 = L_84->get_tutorialMgr_43();
		NullCheck(L_85);
		bool L_86 = L_85->get_gameovered_endurance_6();
		if (L_86)
		{
			goto IL_01fc;
		}
	}
	{
		// tutorialMgr.onGameOver_tut.SetActive(true);
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_87 = V_1;
		NullCheck(L_87);
		TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * L_88 = L_87->get_tutorialMgr_43();
		NullCheck(L_88);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_89 = L_88->get_onGameOver_tut_37();
		NullCheck(L_89);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_89, (bool)1, /*hidden argument*/NULL);
		// tutorialMgr.reason_text.text = "사유: 졸려서 뻗음..";
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_90 = V_1;
		NullCheck(L_90);
		TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * L_91 = L_90->get_tutorialMgr_43();
		NullCheck(L_91);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_92 = L_91->get_reason_text_38();
		NullCheck(L_92);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_92, _stringLiteral1D66044B1E449F63E6A32359B0F07B35C767E650);
		// Time.timeScale = 0.0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// inGameMgr.isPause = true;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_93 = V_1;
		NullCheck(L_93);
		InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 * L_94 = L_93->get_inGameMgr_36();
		NullCheck(L_94);
		L_94->set_isPause_6((bool)1);
		// tutorialMgr.gameovered_endurance = true;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_95 = V_1;
		NullCheck(L_95);
		TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * L_96 = L_95->get_tutorialMgr_43();
		NullCheck(L_96);
		L_96->set_gameovered_endurance_6((bool)1);
	}

IL_01fc:
	{
		// }
		return (bool)0;
	}
}
// System.Object TvGameMgr/<DecreaseEndurance>d__50::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDecreaseEnduranceU3Ed__50_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2402D3C45DC4CC54092E1DC1B4919FD250B43EEE (U3CDecreaseEnduranceU3Ed__50_t6EEF1D2655D9B83253EE4A2A73DE10969C6F3C0F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TvGameMgr/<DecreaseEndurance>d__50::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDecreaseEnduranceU3Ed__50_System_Collections_IEnumerator_Reset_m73A1EA66151D86665248EF63AEBBA599F2832AE4 (U3CDecreaseEnduranceU3Ed__50_t6EEF1D2655D9B83253EE4A2A73DE10969C6F3C0F * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDecreaseEnduranceU3Ed__50_System_Collections_IEnumerator_Reset_m73A1EA66151D86665248EF63AEBBA599F2832AE4_RuntimeMethod_var)));
	}
}
// System.Object TvGameMgr/<DecreaseEndurance>d__50::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDecreaseEnduranceU3Ed__50_System_Collections_IEnumerator_get_Current_m7BA2662874982357425C41E35E5F7D9AA057EB3E (U3CDecreaseEnduranceU3Ed__50_t6EEF1D2655D9B83253EE4A2A73DE10969C6F3C0F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TvGameMgr/<PlusScore>d__47::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlusScoreU3Ed__47__ctor_m230D3A0BBA56647D7C05BE672814D6CAAC07AA4F (U3CPlusScoreU3Ed__47_t27B0AE547D0422F352AE54E116E71B0A1FEC0F10 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TvGameMgr/<PlusScore>d__47::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlusScoreU3Ed__47_System_IDisposable_Dispose_m9CC974A3BDDB5F6996873EBC962D4258AB99CAC1 (U3CPlusScoreU3Ed__47_t27B0AE547D0422F352AE54E116E71B0A1FEC0F10 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TvGameMgr/<PlusScore>d__47::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPlusScoreU3Ed__47_MoveNext_m0A20634747885DCEAFA466C51EAF20FA79178FB3 (U3CPlusScoreU3Ed__47_t27B0AE547D0422F352AE54E116E71B0A1FEC0F10 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResolutionSettings_t2E436EB43090A993B3D4AEDD39B8CBB007F954BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C91CDDCE5498D2D95273E9C4922AD529E3C45C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83236B570867C6D6A8DA25A4E7BD7C64180C348D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (tvButtonMgr.isTvOn)
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_5 = V_1;
		NullCheck(L_5);
		TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C * L_6 = L_5->get_tvButtonMgr_35();
		NullCheck(L_6);
		bool L_7 = L_6->get_isTvOn_18();
		if (!L_7)
		{
			goto IL_0127;
		}
	}
	{
		// if (decreaseEndur != null)
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_8 = V_1;
		NullCheck(L_8);
		RuntimeObject* L_9 = L_8->get_decreaseEndur_21();
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		// StopCoroutine(decreaseEndur);
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_10 = V_1;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_11 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_12 = L_11->get_decreaseEndur_21();
		NullCheck(L_10);
		MonoBehaviour_StopCoroutine_m3AB89AE7770E06BDB33BF39104BE5C57DF90616B(L_10, L_12, /*hidden argument*/NULL);
	}

IL_0062:
	{
		// Score += addingScore * 2;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_13 = V_1;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_14 = V_1;
		NullCheck(L_14);
		uint64_t L_15 = L_14->get_Score_4();
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_16 = V_1;
		NullCheck(L_16);
		uint64_t L_17 = L_16->get_addingScore_22();
		NullCheck(L_13);
		L_13->set_Score_4(((int64_t)il2cpp_codegen_add((int64_t)L_15, (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_17, (int64_t)((int64_t)((int64_t)2)))))));
		// int startValue = Endurance;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_18 = V_1;
		NullCheck(L_18);
		int32_t L_19 = L_18->get_Endurance_5();
		V_2 = L_19;
		// if (Endurance < EnduranceMax * 0.5f)
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21 = L_20->get_Endurance_5();
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23 = L_22->get_EnduranceMax_6();
		if ((!(((float)((float)((float)L_21))) < ((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_23)), (float)(0.5f)))))))
		{
			goto IL_00a6;
		}
	}
	{
		// Endurance += 50;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_24 = V_1;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26 = L_25->get_Endurance_5();
		NullCheck(L_24);
		L_24->set_Endurance_5(((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)((int32_t)50))));
		goto IL_00d1;
	}

IL_00a6:
	{
		// else if (Endurance < EnduranceMax)
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_27 = V_1;
		NullCheck(L_27);
		int32_t L_28 = L_27->get_Endurance_5();
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_29 = V_1;
		NullCheck(L_29);
		int32_t L_30 = L_29->get_EnduranceMax_6();
		if ((((int32_t)L_28) >= ((int32_t)L_30)))
		{
			goto IL_00c5;
		}
	}
	{
		// Endurance += 30;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_31 = V_1;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_32 = V_1;
		NullCheck(L_32);
		int32_t L_33 = L_32->get_Endurance_5();
		NullCheck(L_31);
		L_31->set_Endurance_5(((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)((int32_t)30))));
		goto IL_00d1;
	}

IL_00c5:
	{
		// Endurance = EnduranceMax;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_34 = V_1;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_35 = V_1;
		NullCheck(L_35);
		int32_t L_36 = L_35->get_EnduranceMax_6();
		NullCheck(L_34);
		L_34->set_Endurance_5(L_36);
	}

IL_00d1:
	{
		// if (option.smoothGage)
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_37 = V_1;
		NullCheck(L_37);
		Option_t4668F0CFD50CE7253A226099157E10033328C0E7 * L_38 = L_37->get_option_44();
		NullCheck(L_38);
		bool L_39 = L_38->get_smoothGage_24();
		if (!L_39)
		{
			goto IL_00f3;
		}
	}
	{
		// Endur_gageMove.StartGageMove(startValue, Endurance, false);
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_40 = V_1;
		NullCheck(L_40);
		GageMove_t12372F686CA9F6984B88FD2B0CE2704AA1CC9969 * L_41 = L_40->get_Endur_gageMove_47();
		int32_t L_42 = V_2;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_43 = V_1;
		NullCheck(L_43);
		int32_t L_44 = L_43->get_Endurance_5();
		NullCheck(L_41);
		GageMove_StartGageMove_m5C93E2781E4AFF1525019AB84C533161764C248D(L_41, L_42, L_44, (bool)0, /*hidden argument*/NULL);
		goto IL_0108;
	}

IL_00f3:
	{
		// Endurance_slider.value = Endurance * 10;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_45 = V_1;
		NullCheck(L_45);
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_46 = L_45->get_Endurance_slider_26();
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_47 = V_1;
		NullCheck(L_47);
		int32_t L_48 = L_47->get_Endurance_5();
		NullCheck(L_46);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_46, ((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_48, (int32_t)((int32_t)10))))));
	}

IL_0108:
	{
		// int percentage = Endurance * 100 / EnduranceMax;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_49 = V_1;
		NullCheck(L_49);
		int32_t L_50 = L_49->get_Endurance_5();
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_51 = V_1;
		NullCheck(L_51);
		int32_t L_52 = L_51->get_EnduranceMax_6();
		V_3 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_50, (int32_t)((int32_t)100)))/(int32_t)L_52));
		// endurColorMgr.SetColor(percentage);
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_53 = V_1;
		NullCheck(L_53);
		SliderColorMgr_t8690AB1B9F806F42AD0A9B9101BC259802451428 * L_54 = L_53->get_endurColorMgr_40();
		int32_t L_55 = V_3;
		NullCheck(L_54);
		SliderColorMgr_SetColor_mB0D7489172E98DC6B0B9E423451ED4DECB63438F(L_54, L_55, /*hidden argument*/NULL);
		// }
		goto IL_013a;
	}

IL_0127:
	{
		// Score += addingScore;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_56 = V_1;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_57 = V_1;
		NullCheck(L_57);
		uint64_t L_58 = L_57->get_Score_4();
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_59 = V_1;
		NullCheck(L_59);
		uint64_t L_60 = L_59->get_addingScore_22();
		NullCheck(L_56);
		L_56->set_Score_4(((int64_t)il2cpp_codegen_add((int64_t)L_58, (int64_t)L_60)));
	}

IL_013a:
	{
		// if (inGameMgr.IsPlayingGame)
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_61 = V_1;
		NullCheck(L_61);
		InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 * L_62 = L_61->get_inGameMgr_36();
		NullCheck(L_62);
		bool L_63 = L_62->get_IsPlayingGame_4();
		if (!L_63)
		{
			goto IL_01c4;
		}
	}
	{
		// string score = SetPointSpot(Score);
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_64 = V_1;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_65 = V_1;
		NullCheck(L_65);
		uint64_t L_66 = L_65->get_Score_4();
		NullCheck(L_64);
		String_t* L_67;
		L_67 = TvGameMgr_SetPointSpot_m198CC275814B4E81B7982A41AE256C8C1C995585(L_64, L_66, /*hidden argument*/NULL);
		V_4 = L_67;
		// Score_text.text = "점수: " + score;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_68 = V_1;
		NullCheck(L_68);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_69 = L_68->get_Score_text_24();
		String_t* L_70 = V_4;
		String_t* L_71;
		L_71 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral83236B570867C6D6A8DA25A4E7BD7C64180C348D, L_70, /*hidden argument*/NULL);
		NullCheck(L_69);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_69, L_71);
		// if (BestScore < Score)
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_72 = V_1;
		NullCheck(L_72);
		uint64_t L_73 = L_72->get_BestScore_7();
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_74 = V_1;
		NullCheck(L_74);
		uint64_t L_75 = L_74->get_Score_4();
		if ((!(((uint64_t)L_73) < ((uint64_t)L_75))))
		{
			goto IL_01c4;
		}
	}
	{
		// BestScore_text.color = Color.yellow;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_76 = V_1;
		NullCheck(L_76);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_77 = L_76->get_BestScore_text_25();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_78;
		L_78 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		NullCheck(L_77);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_77, L_78);
		// if(ResolutionSettings.is18vs9)
		IL2CPP_RUNTIME_CLASS_INIT(ResolutionSettings_t2E436EB43090A993B3D4AEDD39B8CBB007F954BE_il2cpp_TypeInfo_var);
		bool L_79 = ((ResolutionSettings_t2E436EB43090A993B3D4AEDD39B8CBB007F954BE_StaticFields*)il2cpp_codegen_static_fields_for(ResolutionSettings_t2E436EB43090A993B3D4AEDD39B8CBB007F954BE_il2cpp_TypeInfo_var))->get_is18vs9_9();
		if (!L_79)
		{
			goto IL_01a0;
		}
	}
	{
		// BestScore_text.fontSize = 42;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_80 = V_1;
		NullCheck(L_80);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_81 = L_80->get_BestScore_text_25();
		NullCheck(L_81);
		Text_set_fontSize_m0D32489043916BCE64E51E0BDFCC12AC1B829411(L_81, ((int32_t)42), /*hidden argument*/NULL);
		goto IL_01ad;
	}

IL_01a0:
	{
		// BestScore_text.fontSize = 32;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_82 = V_1;
		NullCheck(L_82);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_83 = L_82->get_BestScore_text_25();
		NullCheck(L_83);
		Text_set_fontSize_m0D32489043916BCE64E51E0BDFCC12AC1B829411(L_83, ((int32_t)32), /*hidden argument*/NULL);
	}

IL_01ad:
	{
		// BestScore_text.text = "최고 점수: " + score;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_84 = V_1;
		NullCheck(L_84);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_85 = L_84->get_BestScore_text_25();
		String_t* L_86 = V_4;
		String_t* L_87;
		L_87 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral2C91CDDCE5498D2D95273E9C4922AD529E3C45C7, L_86, /*hidden argument*/NULL);
		NullCheck(L_85);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_85, L_87);
	}

IL_01c4:
	{
		// if (inGameMgr.IsPlayingGame)
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_88 = V_1;
		NullCheck(L_88);
		InGameMgr_tFDB73BE8408EE7A04F3A1DD248C93F4D899ECF58 * L_89 = L_88->get_inGameMgr_36();
		NullCheck(L_89);
		bool L_90 = L_89->get_IsPlayingGame_4();
		if (!L_90)
		{
			goto IL_01d7;
		}
	}
	{
		// StartPlusScore();
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_91 = V_1;
		NullCheck(L_91);
		TvGameMgr_StartPlusScore_m818E061BD8B1B890415007FD44C284ADA76ADCEA(L_91, /*hidden argument*/NULL);
	}

IL_01d7:
	{
		// }
		return (bool)0;
	}
}
// System.Object TvGameMgr/<PlusScore>d__47::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPlusScoreU3Ed__47_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m300D309CBD499BEB1299CCC6E23FA9BC9DDBEEE7 (U3CPlusScoreU3Ed__47_t27B0AE547D0422F352AE54E116E71B0A1FEC0F10 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TvGameMgr/<PlusScore>d__47::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlusScoreU3Ed__47_System_Collections_IEnumerator_Reset_m735B14C34AF77969D7B00CF49CEE0B492CCF640D (U3CPlusScoreU3Ed__47_t27B0AE547D0422F352AE54E116E71B0A1FEC0F10 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPlusScoreU3Ed__47_System_Collections_IEnumerator_Reset_m735B14C34AF77969D7B00CF49CEE0B492CCF640D_RuntimeMethod_var)));
	}
}
// System.Object TvGameMgr/<PlusScore>d__47::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPlusScoreU3Ed__47_System_Collections_IEnumerator_get_Current_m782970E143E1673C0CEC0075C7F33840F5E5E565 (U3CPlusScoreU3Ed__47_t27B0AE547D0422F352AE54E116E71B0A1FEC0F10 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TvGameMgr/<WaitMission>d__56::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitMissionU3Ed__56__ctor_m18C09295645612E4DE3A2E7B4C8CD71FC89959B8 (U3CWaitMissionU3Ed__56_t59EDCCAD3964067859AC54E89ED67F0CEA7E143C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TvGameMgr/<WaitMission>d__56::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitMissionU3Ed__56_System_IDisposable_Dispose_m1EC8BEA7213B33873F41C0FFBD07D70796EC6B94 (U3CWaitMissionU3Ed__56_t59EDCCAD3964067859AC54E89ED67F0CEA7E143C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TvGameMgr/<WaitMission>d__56::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitMissionU3Ed__56_MoveNext_m3B303C4FE7FFD51F1E53C84564185F5BA8BE4A9B (U3CWaitMissionU3Ed__56_t59EDCCAD3964067859AC54E89ED67F0CEA7E143C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F53B3319C2F9400291B2D9AE0C7468A878BE5A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37E3136B56829071B1FC580847B1FF3FFD8990A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A4031B88E8A8625124B937BA7E93710E73A5C2C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(time);
		float L_4 = __this->get_time_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// int randomMission = Random.Range(0,2);
		int32_t L_6;
		L_6 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 2, /*hidden argument*/NULL);
		V_2 = L_6;
		// if (randomMission.Equals(0) || tutorialMgr.isTutorialOn)
		bool L_7;
		L_7 = Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4((int32_t*)(&V_2), 0, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_005e;
		}
	}
	{
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_8 = V_1;
		NullCheck(L_8);
		TutorialMgr_tAB2767A2063DBA6815BB9173DB6139A77AD147BD * L_9 = L_8->get_tutorialMgr_43();
		NullCheck(L_9);
		bool L_10 = L_9->get_isTutorialOn_4();
		if (!L_10)
		{
			goto IL_00b6;
		}
	}

IL_005e:
	{
		// startChannel = tvButtonMgr.TvChannel;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_11 = V_1;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_12 = V_1;
		NullCheck(L_12);
		TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C * L_13 = L_12->get_tvButtonMgr_35();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_TvChannel_16();
		NullCheck(L_11);
		L_11->set_startChannel_15(L_14);
		// targetChannel = Random.Range(1, tvButtonMgr.ChannelMax + 1);
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_15 = V_1;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_16 = V_1;
		NullCheck(L_16);
		TVButtonMgr_tF05D46F241735E3B92F3FB8A1F0E8A478491600C * L_17 = L_16->get_tvButtonMgr_35();
		NullCheck(L_17);
		int32_t L_18 = L_17->get_ChannelMax_17();
		int32_t L_19;
		L_19 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_15);
		L_15->set_targetChannel_14(L_19);
		// Mission_Backimg.SetActive(true);
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_20 = V_1;
		NullCheck(L_20);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = L_20->get_Mission_Backimg_34();
		NullCheck(L_21);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_21, (bool)1, /*hidden argument*/NULL);
		// Mission_text.text = "목표 채널: " + targetChannel;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_22 = V_1;
		NullCheck(L_22);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_23 = L_22->get_Mission_text_33();
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_24 = V_1;
		NullCheck(L_24);
		int32_t* L_25 = L_24->get_address_of_targetChannel_14();
		String_t* L_26;
		L_26 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_25, /*hidden argument*/NULL);
		String_t* L_27;
		L_27 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral5A4031B88E8A8625124B937BA7E93710E73A5C2C, L_26, /*hidden argument*/NULL);
		NullCheck(L_23);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, L_27);
		// }
		goto IL_010c;
	}

IL_00b6:
	{
		// targetTVPower = Random.Range(TVPowerMin, TVPowerMax);
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_28 = V_1;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_29 = V_1;
		NullCheck(L_29);
		int32_t L_30 = L_29->get_TVPowerMin_19();
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_31 = V_1;
		NullCheck(L_31);
		int32_t L_32 = L_31->get_TVPowerMax_18();
		int32_t L_33;
		L_33 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(L_30, L_32, /*hidden argument*/NULL);
		NullCheck(L_28);
		L_28->set_targetTVPower_16(L_33);
		// numOfTVPower = 0;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_34 = V_1;
		NullCheck(L_34);
		L_34->set_numOfTVPower_17(0);
		// Mission_Backimg.SetActive(true);
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_35 = V_1;
		NullCheck(L_35);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = L_35->get_Mission_Backimg_34();
		NullCheck(L_36);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_36, (bool)1, /*hidden argument*/NULL);
		// isPowerMissionOn = true;
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_37 = V_1;
		NullCheck(L_37);
		L_37->set_isPowerMissionOn_20((bool)1);
		// Mission_text.text = "TV껐다 켜기: " + targetTVPower + "회";
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_38 = V_1;
		NullCheck(L_38);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_39 = L_38->get_Mission_text_33();
		TvGameMgr_t74A793F5C08D624E5ACF08C18D66AFA305D694D0 * L_40 = V_1;
		NullCheck(L_40);
		int32_t* L_41 = L_40->get_address_of_targetTVPower_16();
		String_t* L_42;
		L_42 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_41, /*hidden argument*/NULL);
		String_t* L_43;
		L_43 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral37E3136B56829071B1FC580847B1FF3FFD8990A8, L_42, _stringLiteral2F53B3319C2F9400291B2D9AE0C7468A878BE5A1, /*hidden argument*/NULL);
		NullCheck(L_39);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_39, L_43);
	}

IL_010c:
	{
		// }
		return (bool)0;
	}
}
// System.Object TvGameMgr/<WaitMission>d__56::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitMissionU3Ed__56_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4704BBD91764D2040F7EB9F13F66D69FFEDDA3EC (U3CWaitMissionU3Ed__56_t59EDCCAD3964067859AC54E89ED67F0CEA7E143C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TvGameMgr/<WaitMission>d__56::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitMissionU3Ed__56_System_Collections_IEnumerator_Reset_mE201136BFD107F6E4970A7C7D6A554C049483BBA (U3CWaitMissionU3Ed__56_t59EDCCAD3964067859AC54E89ED67F0CEA7E143C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitMissionU3Ed__56_System_Collections_IEnumerator_Reset_mE201136BFD107F6E4970A7C7D6A554C049483BBA_RuntimeMethod_var)));
	}
}
// System.Object TvGameMgr/<WaitMission>d__56::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitMissionU3Ed__56_System_Collections_IEnumerator_get_Current_m7B14012827B3D4C87DE2F3731833AED905547A9F (U3CWaitMissionU3Ed__56_t59EDCCAD3964067859AC54E89ED67F0CEA7E143C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityAdsMgr/<ShowAdWhenReady>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowAdWhenReadyU3Ed__8__ctor_mF21DDBCEB83194BA979EF7F497069782427AE037 (U3CShowAdWhenReadyU3Ed__8_tF8CAB47B2E1089E8266B722F3D42BC37BC3EA532 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityAdsMgr/<ShowAdWhenReady>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowAdWhenReadyU3Ed__8_System_IDisposable_Dispose_mCE7E42E3D7CF54B47524AEDC2A49051F01AA0330 (U3CShowAdWhenReadyU3Ed__8_tF8CAB47B2E1089E8266B722F3D42BC37BC3EA532 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityAdsMgr/<ShowAdWhenReady>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShowAdWhenReadyU3Ed__8_MoveNext_m0509AF9050DD8EE56357D915A987A318AA0F379F (U3CShowAdWhenReadyU3Ed__8_tF8CAB47B2E1089E8266B722F3D42BC37BC3EA532 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UnityAdsMgr_t33D8DE69F0F8B22831767D5376841535472C3BC0 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UnityAdsMgr_t33D8DE69F0F8B22831767D5376841535472C3BC0 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0037;
	}

IL_0020:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0030:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0037:
	{
		// while(!Advertisement.IsReady(myPlacementId))
		UnityAdsMgr_t33D8DE69F0F8B22831767D5376841535472C3BC0 * L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_myPlacementId_7();
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Advertisement_IsReady_m49F6B27947CEBCEFFB7097347724A2A92529C1BE(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0020;
		}
	}
	{
		// Advertisement.Show(myPlacementId);
		UnityAdsMgr_t33D8DE69F0F8B22831767D5376841535472C3BC0 * L_7 = V_1;
		NullCheck(L_7);
		String_t* L_8 = L_7->get_myPlacementId_7();
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_tE00CD19CD54B32CA893D9EFFA835E91C5982F429_il2cpp_TypeInfo_var);
		Advertisement_Show_m3DF28E16C5D36377E310EB287C589E6F287828B0(L_8, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object UnityAdsMgr/<ShowAdWhenReady>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShowAdWhenReadyU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m102DDD47F6ECC398203459D5ED2D8769F2F61822 (U3CShowAdWhenReadyU3Ed__8_tF8CAB47B2E1089E8266B722F3D42BC37BC3EA532 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityAdsMgr/<ShowAdWhenReady>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowAdWhenReadyU3Ed__8_System_Collections_IEnumerator_Reset_m8A5BD44D9B4CE59B45B81EE52BD42E2EAFE8E893 (U3CShowAdWhenReadyU3Ed__8_tF8CAB47B2E1089E8266B722F3D42BC37BC3EA532 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShowAdWhenReadyU3Ed__8_System_Collections_IEnumerator_Reset_m8A5BD44D9B4CE59B45B81EE52BD42E2EAFE8E893_RuntimeMethod_var)));
	}
}
// System.Object UnityAdsMgr/<ShowAdWhenReady>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShowAdWhenReadyU3Ed__8_System_Collections_IEnumerator_get_Current_mEA98E4ABE4F03E3DBEA09672725C0A5FCC92B311 (U3CShowAdWhenReadyU3Ed__8_tF8CAB47B2E1089E8266B722F3D42BC37BC3EA532 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m683C32BBAC83669BA2265894634CEAE70C4A6614 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * L_0 = (U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 *)il2cpp_codegen_object_new(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mEBF80A620A94FE40D2596C51F075EEFC2F2265EC(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEBF80A620A94FE40D2596C51F075EEFC2F2265EC (U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<ToString>b__14_0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToStringU3Eb__14_0_m45C8B082FF31EE226F60B7F07B8766144F9CDD0A (U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * __this, bool ___p0, const RuntimeMethod* method)
{
	{
		// string.Join(",", mCaptureModesSupported.Select(p => p.ToString()).ToArray()),
		String_t* L_0;
		L_0 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&___p0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<ToString>b__14_1(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToStringU3Eb__14_1_m3115B8DF5C3E736775205FD2203ACF06FBD6626B (U3CU3Ec_tCE26F1179816A5674199B49AA1575906BAB545B6 * __this, bool ___p0, const RuntimeMethod* method)
{
	{
		// string.Join(",", mQualityLevelsSupported.Select(p => p.ToString()).ToArray()));
		String_t* L_0;
		L_0 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&___p0), /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mE24B0887E2623712FCCA4EF87B9728F609B42108 (U3CU3Ec__DisplayClass2_0_t3AB64EA834826C490341842E1F025B45BE316BB7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener/<>c__DisplayClass2_0::<OnEndpointFound>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3COnEndpointFoundU3Eb__0_m2DB3FDDECA8DA92A58195C468509A86F914D082A (U3CU3Ec__DisplayClass2_0_t3AB64EA834826C490341842E1F025B45BE316BB7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDiscoveryListener_tE23B875A4F3EF6310BDF51338EDC8C0EEB84B9C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayGamesHelperObject.RunOnGameThread(() => mListener.OnEndpointFound(discoveredEndpoint));
		OnGameThreadDiscoveryListener_tA8F52AF6E109E1D8FC2E09248EAD887F5BAEE461 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_mListener_0();
		EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288  L_2 = __this->get_discoveredEndpoint_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< EndpointDetails_t4A4E471740BFF63BBFCD935F14E60252590FD288  >::Invoke(0 /* System.Void GooglePlayGames.BasicApi.Nearby.IDiscoveryListener::OnEndpointFound(GooglePlayGames.BasicApi.Nearby.EndpointDetails) */, IDiscoveryListener_tE23B875A4F3EF6310BDF51338EDC8C0EEB84B9C4_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mCCF4976232FD650E5D5E6B85C778ADEAF8FBC206 (U3CU3Ec__DisplayClass3_0_tDBD1EA268703AB432125788330B6A6173A98CCFC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadDiscoveryListener/<>c__DisplayClass3_0::<OnEndpointLost>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3COnEndpointLostU3Eb__0_m0200B31A4C0317224E90DA91C54A0A88F61D5915 (U3CU3Ec__DisplayClass3_0_tDBD1EA268703AB432125788330B6A6173A98CCFC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDiscoveryListener_tE23B875A4F3EF6310BDF51338EDC8C0EEB84B9C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayGamesHelperObject.RunOnGameThread(() => mListener.OnEndpointLost(lostEndpointId));
		OnGameThreadDiscoveryListener_tA8F52AF6E109E1D8FC2E09248EAD887F5BAEE461 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_mListener_0();
		String_t* L_2 = __this->get_lostEndpointId_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void GooglePlayGames.BasicApi.Nearby.IDiscoveryListener::OnEndpointLost(System.String) */, IDiscoveryListener_tE23B875A4F3EF6310BDF51338EDC8C0EEB84B9C4_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m851B27C38EB8C4C07C58C72AC524661732F2000B (U3CU3Ec__DisplayClass2_0_tA8CAA40AF7E63A15CBEBE280B1337FE9ADE6CAD5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass2_0::<OnMessageReceived>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3COnMessageReceivedU3Eb__0_m9F0B1111C2474001B8FD55DA7F03FEB89E00A136 (U3CU3Ec__DisplayClass2_0_tA8CAA40AF7E63A15CBEBE280B1337FE9ADE6CAD5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMessageListener_tC2C50F206BC9FAC318DCDDBEFE35A2158AA2DD6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayGamesHelperObject.RunOnGameThread(() => mListener.OnMessageReceived(
		//     remoteEndpointId, data, isReliableMessage));
		OnGameThreadMessageListener_tC0036576C495E967400B0EA79D9A87E5B8F44AE1 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_mListener_0();
		String_t* L_2 = __this->get_remoteEndpointId_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get_data_2();
		bool L_4 = __this->get_isReliableMessage_3();
		NullCheck(L_1);
		InterfaceActionInvoker3< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, bool >::Invoke(0 /* System.Void GooglePlayGames.BasicApi.Nearby.IMessageListener::OnMessageReceived(System.String,System.Byte[],System.Boolean) */, IMessageListener_tC2C50F206BC9FAC318DCDDBEFE35A2158AA2DD6D_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m337C772A3D5E750E62ADCF2F9406DAD1417DEF8A (U3CU3Ec__DisplayClass3_0_tFB0C2E6D2ED758CA8CDBC373282072749C1FA9DB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidNearbyConnectionClient/OnGameThreadMessageListener/<>c__DisplayClass3_0::<OnRemoteEndpointDisconnected>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3COnRemoteEndpointDisconnectedU3Eb__0_mFD7A5DFB1A6BD79A2C67EC12D40F44193A6E5DBC (U3CU3Ec__DisplayClass3_0_tFB0C2E6D2ED758CA8CDBC373282072749C1FA9DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMessageListener_tC2C50F206BC9FAC318DCDDBEFE35A2158AA2DD6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// () => mListener.OnRemoteEndpointDisconnected(remoteEndpointId));
		OnGameThreadMessageListener_tC0036576C495E967400B0EA79D9A87E5B8F44AE1 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_mListener_0();
		String_t* L_2 = __this->get_remoteEndpointId_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void GooglePlayGames.BasicApi.Nearby.IMessageListener::OnRemoteEndpointDisconnected(System.String) */, IMessageListener_tC2C50F206BC9FAC318DCDDBEFE35A2158AA2DD6D_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m691E87427BDD761F9ECC8E2D53FC10E57EBDAC15 (U3CU3Ec__DisplayClass2_0_t7AC9953B2421A79B7821986D0B9D970A5996C8A4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidVideoClient/OnCaptureOverlayStateListenerProxy/<>c__DisplayClass2_0::<onCaptureOverlayStateChanged>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3ConCaptureOverlayStateChangedU3Eb__0_m405AFBA874AEBECB1D3047BAEC93A1BE064C0BA9 (U3CU3Ec__DisplayClass2_0_t7AC9953B2421A79B7821986D0B9D970A5996C8A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaptureOverlayStateListener_t9DE6C20BD115A79BA44E615E7255F06DB9E59E0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mListener.OnCaptureOverlayStateChanged(FromVideoCaptureOverlayState(overlayState))
		OnCaptureOverlayStateListenerProxy_tD7A939B0C9AE046FAAAB7093F51DB81FF91AF5D7 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_mListener_4();
		int32_t L_2 = __this->get_overlayState_1();
		int32_t L_3;
		L_3 = OnCaptureOverlayStateListenerProxy_FromVideoCaptureOverlayState_m4C062F855CDDC03616E9A5B0863B52405DDDDD53(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void GooglePlayGames.BasicApi.Video.CaptureOverlayStateListener::OnCaptureOverlayStateChanged(GooglePlayGames.BasicApi.VideoCaptureOverlayState) */, CaptureOverlayStateListener_t9DE6C20BD115A79BA44E615E7255F06DB9E59E0F_il2cpp_TypeInfo_var, L_1, L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float DifficultyData_get_Period_m60FF181F100735CC03B19588AE00DA8D0FC8C516_inline (DifficultyData_tB1A89BA060411BADB493F4CAA1D05880D1F2C4F2 * __this, const RuntimeMethod* method)
{
	{
		// public float Period { get { return period; } }
		float L_0 = __this->get_period_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* DifficultyData_get_DecreasePortion_m16DF35F9ABFC1E3F05FB5C55BFAAE344C24A4B22_inline (DifficultyData_tB1A89BA060411BADB493F4CAA1D05880D1F2C4F2 * __this, const RuntimeMethod* method)
{
	{
		// public float[] DecreasePortion { get { return decreasePortion; } }
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = __this->get_decreasePortion_12();
		return L_0;
	}
}
