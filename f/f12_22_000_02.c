BGOpen("sc500",1);
ChLayout(1);
MsgClose();
BGMPlay("BGM_C22_HIKARU_A",0.01);
ChOpen(22,254,0,0,3,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("F122200002_22_000");
MsgDisp("Hikaru","Mari, let's go home together～");
MsgDisp("主人公","Sure.");
BGMStop();
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc000",1);
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,0);
ScrFadeIn(0);
ChMotion(22,4,1);
VoicePlay("F122200002_22_010");
MsgDisp("Hikaru","Hey, Mari.
Valentine's Day is coming up.
Isn't this the last one of high school?");
MsgDisp("主人公","Yeah, that's right.");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("F122200002_22_020");
MsgDisp("Hikaru","It might be meddling, but for Mari's love,
Hikaru will do anything.");
ChMotion(22,0,1);
VoicePlay("F122200002_22_030");
MsgDisp("Hikaru","This really is the end of high school,
isn't it?");
MsgDisp("主人公","｛ひかる＊｝...... thanks for
everything.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("F122200002_22_040");
MsgDisp("Hikaru","Ehe, it's good, because Hikaru is Mari's
cupid in love."); 
MsgDisp("主人公","(Right, this Valentine's Day is the last
one of high school...)");
MsgClose();
ScrFadeOut(0,0);
