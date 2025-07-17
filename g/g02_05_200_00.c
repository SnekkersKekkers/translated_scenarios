MsgClose();
ChOpen(5,255,0,0,4,#1,#1,0,0);
VoiceEVSPlay(5);
VoicePlay("G020520000_05_000");
MsgDisp("Hiiragi","｛主人公｝.");
MsgDisp("主人公","What is it?");
ChEye(5,4);
VoicePlay("G020520000_05_010");
MsgDisp("Hiiragi","I'd be relieved if you could hear me.");
MsgDisp("主人公","?");
ChMotion(5,4);
VoicePlay("G020520000_05_020");
MsgDisp("Hiiragi","If you can hear even my inner voice, then
it's just a little more.");
VoicePlay("G020520000_05_030");
MsgDisp("Hiiragi","Until I can be the one closest to you.");
MsgDisp("主人公","Ehh?");
ChEye(5,2);
ChMotion(5,2);
VoicePlay("G020520000_05_040");
MsgDisp("Hiiragi","Don't be that surprised.
Even I understand.
That for you I'm not number one.");
ChEye(5,4);
ChMotion(5,0);
VoicePlay("G020520000_05_050");
MsgDisp("Hiiragi","I won't do anything unreasonable.
Though...
I think I'll struggle just a bit more.");
MsgDisp("主人公","｛柊＊＊＊｝?");
VoicePlay("G020520000_05_060");
MsgDisp("Hiiragi","My feelings won't lose out to the person
closest to you.");
ChEye(5,3);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("G020520000_05_070");
MsgDisp("Hiiragi","Haa... that was a relief.
You know, it's within my nature to be true
to my words.");
MsgDisp("主人公","(The person closest to me...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(5,#1);
ChMouthOpenLevel(5,#1);
ChCheek(5,0);
