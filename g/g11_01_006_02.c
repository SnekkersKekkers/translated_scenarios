BGOpen("sc511",0);
SEPlay("EV_SE_SCHOOL_002");
ScrFadeIn(0);
MsgDisp("主人公","(That's right......today ｛風真＊＊｝
invited me to walk home together.)");
SEStop("EV_SE_SCHOOL_002",1.5);
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev001",1);
MsgClose();
BGMPlay("BGM_C01_RYOUTA_B",0.01);
ChOpen(1,100,0,0,0,8,#1,0,0);
ScrFadeIn(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("G110100602_01_000");
MsgDisp("Kazama","Hey, you've been getting along with Honda
recently, huh?");
MsgDisp("主人公","Eh, ｛本多＊＊｝......?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G110100602_01_010");
MsgDisp("Kazama","Haa......");
ChEye(1,1);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("G110100602_01_020");
MsgDisp("Kazama","So you refer to him as that, huh?");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("G110100602_01_030");
MsgDisp("Kazama","Haaー, I wish I didn't ask.");
MsgDisp("主人公","Umm......");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("G110100602_01_040");
MsgDisp("Kazama","Phew...... Frankly it's frustrating, but
it can't be helped now.");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("G110100602_01_050");
MsgDisp("Kazama","Hm? 
Doesn't that sunset cloud somewhat
look like Honda's face?");
MsgDisp("主人公","Eh? Which one?");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("G110100602_01_060");
MsgDisp("Kazama","This is our time together.
Don't disturb us!");
MsgDisp("主人公","Hehe, 
it doesn't look like him at all.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("G110100602_01_070");
MsgDisp("Kazama","No, that cloud over there also looks like
him.");
MsgDisp("主人公","Ehhー?");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
