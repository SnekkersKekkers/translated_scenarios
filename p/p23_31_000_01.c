BGMStop();
BGOpen("sc740",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Phew, I somehow made it in time.)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(31,254,3,0,0,-1,-1,0,0);
VoicePlay("P233100001_31_000");
MsgDisp("Goro","It's wonderful, huh? The perspiration of
the springtime of life. It's beautiful,
no?");
MsgDisp("主人公","Ah, ＧＯＲＯ-sensei!
DId you come all this way to see it?");
ChEye(31,2);
ChMouth(31,2);
ChMotion(31,4);
VoicePlay("P233100001_31_010");
MsgDisp("Goro","Well, yeah.");
VoicePlay("P233100001_47_000");
MsgDisp("Broadcast","Habataki High School's play will begin
shortly.");
SEPlay("EV_SE_038");
SEWait();
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,0);
VoicePlay("P233100001_31_020");
MsgDisp("Goro","A story will unfold from the stage you
created. I'll watch it from here.");
MsgDisp("主人公","Yes!");
MsgClose();
ScrFadeOut(0);
ChClose(31,0,0);
