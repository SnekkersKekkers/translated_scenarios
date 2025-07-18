BGOpen("sc511",0);
SEPlay("EV_SE_SCHOOL_002");
ScrFadeIn(0);
MsgDisp("主人公","(It's time to go home, I guess.)");
MsgDisp("主人公","(...Huh? ｛風真＊＊｝ is over
there. Might as well chat a bit before I
head home.)");
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
ChOpen(1,100,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110100901_01_000");
MsgDisp("Kazama","Hey, our path home is special right?");
MsgDisp("主人公","Yeah, I agree.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G110100901_01_010");
MsgDisp("Kazama","That's the only time the bell ever rang.
So when I leave here with you, I get the
feeling something might happen.");
MsgDisp("主人公","Hehe, really?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("G110100901_01_020");
MsgDisp("Kazama","I wonder if that's a good thing or not?");
ChMouthOpenLevel(1,0);
VoicePlay("A010000000_01_021");
MsgDisp("Ryota","Over here!
I think I heard it over here!
Come!");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("G110100901_01_040");
MsgDisp("Kazama","...Hm?");
MsgDisp("主人公","Eh∋");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G110100901_01_050");
MsgDisp("Kazama","Did you hear that?");
MsgDisp("主人公","Y-Yeah, the kid version of
｛風真＊＊｝?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G110100901_01_060");
MsgDisp("Kazama","Yeah, I wonder if we can meet the younger
version of ourselves?
Let's go to check it out!");
MsgDisp("主人公","Wait, what?!");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
MsgDisp("主人公","(How mysterious...It really did sound
like ｛風真＊＊｝'s voice from a
long time ago.)");
MsgClose();
