BGOpen("sc500",1);
ChLayout(1);
MsgClose();
BGMPlay("BGM_C22_HIKARU_A",0.01);
ChOpen(22,254,0,0,3,#1,#1,0,0);
ScrFadeIn(0);
ChMotion(22,4,1);
VoicePlay("F122200000_22_000");
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
VoicePlay("F122200000_22_010");
MsgDisp("Hikaru","So, who are you going to give it to?");
MsgDisp("主人公","Huh?");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("F122200000_22_020");
MsgDisp("Hikaru","Well, it's almost Valentine's Day.
You have to get it right!");
MsgDisp("主人公","Ah, yeah.
What about you, ｛ひかる＊｝?");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("F122200000_22_030");
MsgDisp("Hikaru","Hikaru?
Hikaru wants Mari's chocolate, but that
goes to the guy in her heart, right?");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
ChEyeOpenLevel(22,0);
VoicePlay("F122200000_22_040");
MsgDisp("Hikaru","Both Sis and Hikaru will help
Mari with full strength.");
MsgDisp("主人公","(Right, Valentine's Day is coming up...)");
MsgClose();
ScrFadeOut(0,0);
