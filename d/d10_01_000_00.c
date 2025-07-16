BGOpen("sc520",0);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_FOOT_WALK_KEEP_ALONE",0,0.5);
MsgDisp("主人公","(My next class is——)");
ChOpen(1,254,0,0,0,#1,#1,0,0,0,30);
ChEye(1,5);
ChMouth(1,2);
ChMotion(1,5);
SEPlay("EV_SE_049",0,0.8);
SEStop("EV_SE_FOOT_WALK_KEEP_ALONE");
ScrQuake(1);
SEWait();
BGMPlay("BGM_C01_RYOUTA_A",0.01);
MsgDisp("主人公","Woah∋");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("D100100000_01_000");
MsgDisp("Kazama","Don't \"woah\" me.");
ChMouth(1,0);
ChEyeOpenLevel(1,0);
MsgDisp("主人公","Ah......
Sorry, ｛風真＊＊｝.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("D100100000_01_010");
MsgDisp("Kazama","I had a feeling you'd come this way.");
MsgDisp("主人公","Eh?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
VoicePlay("D100100000_01_020");
MsgDisp("Kazama","I didn't think you'd run into me like
that, though.
Be careful, okay?");
MsgDisp("主人公","(｛風真＊＊｝ somehow knows what I'm up
to......?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
