BGOpen("sc300",0);
ScrFadeIn(0);
MsgDisp("主人公","(Whew...
Afternoon classes are making me sleepy...)");
MsgClose();
ScrFadeOut(0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
SEPlay("EV_SE_SCHOOL_002");
MsgClose();
BGOpen("sc310",0);
ChLayout(1);
Wait(30,1);
SEPlay("EV_SE_788",1,0.6);
ScrFadeIn(0);
Wait(80,1);
MsgClose();
SEStop("EV_SE_SCHOOL_002",3);
SEStop("EV_SE_788",3);
BGMPlay("BGM_C01_RYOUTA_A",0.01);
ChOpen(1,254,0,0,3,10,#1,0,0);
ChEyeOpenLevel(1,8);
VoiceEVSPlay(1);
VoicePlay("F100110000_01_000");
MsgDisp("Kazama","｛主人公｝.
Were you falling asleep just now?");
MsgDisp("主人公","Ah!
｛風真＊＊｝, you were watching?");
ChMotion(1,3);
Wait(10,0);
ChMouth(1,3);
ChEyeOpenLevel(1,#1);
VoicePlay("F100110000_01_010");
MsgDisp("Kazama","More like I was gawking at you.
Three times.");
MsgDisp("主人公","...you were counting?");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("F100110000_01_020");
MsgDisp("Kazama","In truth, I was getting tired too, so I
thought you'd help me stay awake.");
MsgDisp("主人公","Why me?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("F100110000_01_030");
MsgDisp("Kazama","I thought if I saw your serious face, it'd
keep me energized, but you were sleepy the
whole time.");
MsgDisp("主人公","Uh....");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("F100110000_01_040");
MsgDisp("Kazama","But it was funny, so I woke up anyway.");
SEPlay("EV_SE_SCHOOL_002");
Wait(50,0);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("F100110000_01_050");
MsgDisp("Kazama","If you start to fall asleep, try to think
about me");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(1);
MsgDisp("主人公","(...I have to get more sleep.)");
SEStop("EV_SE_SCHOOL_002",1);
MsgClose();
ScrFadeOut(0,0);
