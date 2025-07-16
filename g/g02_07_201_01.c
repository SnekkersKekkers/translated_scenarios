ChLayout(1);
MsgClose();
ChOpen(7,255,0,0,0,#1,#1,0,0);
VoicePlay("G020720101_07_000");
MsgDisp("Mikage","What the?
I think I just saw a blue firefly.");
MsgDisp("主人公","I also saw a blue light.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("G020720101_07_010");
MsgDisp("Mikage","Are we alright?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("G020720101_07_020");
MsgDisp("Mikage","......Maybe the mysterious power here is
real?");
MsgDisp("主人公","If it is, that's amazing.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G020720101_07_030");
MsgDisp("Mikage","Shall I check it out?");
MsgDisp("主人公","Eh, how——");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("G020720101_07_040");
MsgDisp("Mikage","Shh, can you hear your inner voice?");
MsgDisp("主人公","Eh?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
ChEyeOpenLevel(7,0);
VoicePlay("G020720101_07_050");
MsgDisp("Mikage","Is that so......
That......
...... I understand.");
MsgDisp("主人公","You heard my inner voice?");
ChEye(7,0);
ChMouth(7,4);
ChMotion(7,0);
ChEyeOpenLevel(7,10);
VoicePlay("G020720101_07_060");
MsgDisp("Mikage","Yeah.
It said I'll be back, so wait a bit.");
MsgDisp("主人公","What does that mean?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,4);
VoicePlay("G020720101_07_070");
MsgDisp("Mikage","Who knows?
That's just how it sounded to me.");
MsgDisp("主人公","(I will return......
Does that mean to
｛御影＊＊｝'s side?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
BGMStop();
ChLayout(1);
ChEyeOpenLevel(7,#1);
ChMouthOpenLevel(7,#1);
ChCheek(7,0);
