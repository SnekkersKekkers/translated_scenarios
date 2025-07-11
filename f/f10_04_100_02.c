BGOpen("sc230",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I feel something strange in the air...)");
MsgClose();
BGMPlay("BGM_C04_NANA_A");
ChNanaType(0);
ChOpen(4,254,0,0,0,-1,-1,0,0,0,60);
VoicePlay("F100410002_04_000");
MsgDisp("Nanatsumori","Yo.");
MsgDisp("主人公","Ah, ｛七ツ森＊｝.");
ChEye(4,2);
VoicePlay("F100410002_04_010");
MsgDisp("Nanatsumori","You're making such a scary face, 
what's wrong?");
MsgDisp("主人公","Yeah.
I feel like... something 
is calling out to me.");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("F100410002_04_020");
MsgDisp("Nanatsumori","Scary.
Did you awaken your occult powers?");
MsgDisp("主人公","Hey...
Hey, ｛七ツ森＊｝. You still have 
your commuter pass, right?");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("F100410002_04_030");
MsgDisp("Nanatsumori","I do, look.");
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,2,1);
VoicePlay("F100410002_04_040");
MsgDisp("Nanatsumori","...Huh?");
MsgDisp("主人公","No way...");
ChEye(4,3);
ChMouth(4,3);
VoicePlay("F100410002_04_050");
MsgDisp("Nanatsumori","...What?");
ChMotion(4,0,1);
VoicePlay("F100410002_04_060");
MsgDisp("Nanatsumori","Look, it's there.");
MsgDisp("主人公","Hey...
But, I'm glad.");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("F100410002_04_070");
MsgDisp("Nanatsumori","If I lose it every time I see you,
I wouldn't be able to function.");
BGMVol(0.5,1);
SEPlay("EV_SE_SCHOOL_002");
Wait(30,0);
MsgDisp("主人公","It's about time to go back
to the classroom.
Let's go, ｛七ツ森＊｝!");
ChEye(4,1);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("F100410002_04_080");
MsgDisp("Nanatsumori","ＯＫ!");
MsgClose();
BGMStop();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
ChClose(4,0,30);
SEPlay("EV_SE_642",0,0.6);
MsgDisp("主人公","...Ah∈");
MsgDisp("主人公","A commuter pass has fallen
where ｛七ツ森＊｝ was standing...
｛七ツ森＊｝ ∈");
MsgDisp("主人公","(Why on earth does 
he drop it every time～∋)");
SEStop("EV_SE_SCHOOL_002",1);
MsgClose();
ScrFadeOut(0,0);
