BGOpen("sc210",0);
ChLayout(1);
BGMPlay("BGM_C03_HONDA_A",0.01);
MsgClose();
ChOpen(3,254,5,3,3,#1,#1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(3);
VoicePlay("D100310000_03_000");
MsgDisp("Honda","｛主人公｝.
Good timing!");
MsgDisp("主人公","｛本多＊＊｝, what's wrong?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("D100310000_03_010");
MsgDisp("Honda","I dreamt about a rose garden.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,4,1);
VoicePlay("D100310000_03_020");
MsgDisp("Honda","It smelled good. There were a bunch of
yellow roses blooming and you and I were
side by side, looking at them.");
MsgDisp("主人公","Eh, that sounds wonderful......");
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("D100310000_03_030");
MsgDisp("Honda","So, I was thinking we could check out the
gardening club together.
Like in the dream.");
MsgDisp("主人公","Hehe, sure.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("D100310000_03_040");
MsgDisp("Honda","I wonder if they have yellow roses～?");
MsgDisp("主人公","(｛本多＊＊｝ and yellow roses?
Sounds familiar......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
