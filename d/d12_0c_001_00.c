MsgDisp("主人公","(Okay, let's take a little detour so we
can see the beautiful sunset on our way
home.)");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("wf200",1);
ScrFadeIn(0);
MsgDisp("主人公","(The sunset is so beautiful from here...
... Hmm?
Over there, is that——)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ScrFadeOut(0,0);
SEWait();
Wait(40,0);
VoicePlay("D120C00100_07_000");
MsgDisp("Mikage?","One, Two, One Two!");
VoicePlay("D120C00100_05_000");
MsgDisp("Hiiragi?","One, Two, One, Two!");
MsgClose();
StlOpen("ev_0c_03");
StlEye(6,0);
StlMouth(6,0);
StlEye(7,1);
StlMouth(7,1);
StlEye(5,0);
StlMouth(5,0);
BGMPlay("BGM_HANYOU_A",0.01);
ScrFadeIn(0);
MsgDisp("主人公","｛柊＊＊＊｝,
｛御影＊＊｝... And
｛氷室＊＊｝∋ Uhm, is everyone
practicing surfing?");
StlEye(5,1);
VoicePlay("D120C00100_05_010");
MsgDisp("Hiiragi","Yes, when I said that I'd like to try
riding the waves, Inori took it seriously.");
StlEye(7,2);
StlMouth(7,0);
VoicePlay("D120C00100_07_010");
MsgDisp("Mikage","O...Oh, it's nice of you to come. Inori is
really strict... Please say something to
him.");
StlEye(5,0);
StlEye(6,0,0);
StlEyeOpenLevel(6,5,1);
StlMouth(6,1);
VoicePlay("D120C00100_06_000");
MsgDisp("Himuro","Kojiro-sensei, I didn't tell you to stop,
did I?");
StlEye(7,1,0);
StlEyeOpenLevel(7,0,1);
StlMouth(7,1);
VoicePlay("D120C00100_07_020");
MsgDisp("Mikage","Yeahyeah.");
StlEyeOpenLevel(6,#1);
StlEyeOpenLevel(7,#1);
VoicePlay("D120C00100_07_030");
MsgDisp("Mikage","One, Two, One, Two!");
StlEyeOpenLevel(5,5,1);
VoicePlay("D120C00100_05_020");
MsgDisp("Hiiragi","One, Two, One, Two!");
StlEye(5,1);
VoicePlay("D120C00100_05_030");
MsgDisp("Hiiragi","As you can see, we have Inori's passionate
instruction.");
StlEyeOpenLevel(7,0,1);
StlEye(5,0);
MsgDisp("主人公","Hehe, you're both getting scolded, huh?");
StlEye(6,2);
StlMouth(6,0);
VoicePlay("D120C00100_06_010");
MsgDisp("Himuro","What are you laughing at?
Do you want to join them");
MsgDisp("主人公","Ehh?");
StlEye(7,2);
StlMouth(7,1);
VoicePlay("D120C00100_07_040");
MsgDisp("Mikage","Don't do it.
You won't be able to move tomorrow...");
MsgClose();
ScrFadeOut(0,0);
StlClose();
BGOpen("ex270",1);
ScrFadeIn(0);
VoicePlay("D120C00100_07_050");
MsgDisp("Mikage","One, Two, One, Two!");
VoicePlay("D120C00100_05_040");
MsgDisp("Hiiragi","One, Two, One, Two!");
VoicePlay("D120C00100_06_020");
MsgDisp("Himuro","If you don't keep your head up, you won't
be able to see the waves!");
MsgDisp("主人公","(I wonder if the two of them will be okay
tomorrow...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(5,0);
ChPrmTblAdd(6,0);
ChPrmTblAdd(7,0);
