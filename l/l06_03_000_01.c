BGOpen("sc230",0);
MsgClose();
BGMPlay("BGM_C03_HONDA_A");
ChOpen(3,254,0,0,0,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
VoiceEVSPlay(3);
VoicePlay("L060300001_03_000");
MsgDisp("Honda","｛主人公｝.");
MsgDisp("主人公","｛本多＊＊｝, what's up?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("L060300001_03_010");
MsgDisp("Honda","I thought I'd return the favor
for Valentine's Day, so here!");
SEPlay("EV_SE_664");
SEWait();
MsgDisp("主人公","Huh, for me?");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,4);
VoicePlay("L060300001_03_020");
MsgDisp("Honda","Ah, I wasn't expecting you to be
so surprised.
Were you not expecting much of a gift?");
MsgDisp("主人公","Not at all!
I'm really happy.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3);
ChEyeOpenLevel(3,0);
VoicePlay("L060300001_03_030");
MsgDisp("Honda","I hope you like it.
See you!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(3);
