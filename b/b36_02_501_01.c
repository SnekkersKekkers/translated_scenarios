MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ex000",1);
BGMPlay("BGM_C02_SASSA_B",0.01);
ChLayout(1);
MsgClose();
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3,1);
ScrFadeIn(0);
VoicePlay("B360250101_02_000");
MsgDisp("Sassa","Alright, we're here.");
MsgDisp("主人公","Eh... 
did you want to come to this park?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("B360250101_02_010");
MsgDisp("Sassa","Um, sorry.
For some reason we ended up here 
whilst I was talking to you.");
ChEye(2,2);
ChMouth(2,2);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("B360250101_02_020");
MsgDisp("Sassa","To be honest, 
the main part was inviting you out.
After that,the details are kinda fuzzy.");
MsgDisp("主人公","Hehe.
Well, we came all the way here. 
Shall we hang out in the park?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,1);
VoicePlay("B360250101_02_030");
MsgDisp("Sassa","Yeah, sounds good.
Personally, I'm curious
about that mound.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,2);
VoicePlay("B360250101_02_040");
MsgDisp("Sassa","I'm going to climb it for  abit!");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
ChClose(2);
MsgDisp("主人公","(｛颯砂＊＊｝, you're like a kid?
Maybe we also used to play like 
this together in Kindergarten...?)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChOpen(2,255,7,0,0,#1,#1,0,0,0,0);
