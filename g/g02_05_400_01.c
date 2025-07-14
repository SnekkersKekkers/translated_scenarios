MsgClose();
ChOpen(5,255,0,0,4,#1,#1,0,0);
VoicePlay("G020540001_05_000");
MsgDisp("Hiiragi","Lately, I've been approached more often by
people I don't know.");
MsgDisp("主人公","They must be ｛柊＊＊＊｝'s fans.'");
ChEye(5,3);
ChMotion(5,4);
VoicePlay("G020540001_05_010");
MsgDisp("Hiiragi","Do you think so?
It's surprising to be called out loudly by
name in the middle of the street.");
MsgDisp("主人公","Loudly?");
ChEye(5,0);
ChMotion(5,0);
VoicePlay("G020540001_05_020");
MsgDisp("Hiiragi","Yes, the other day it was a lively boy.");
ChEye(5,3);
VoicePlay("G020540001_05_030");
MsgDisp("Hiiragi","He even did an impression of me.
Isn't that adorable?");
MsgDisp("主人公","How did he imitate you?");
ChEye(5,4);
ChMouth(5,3);
ChMotion(5,4);
VoicePlay("G020540001_05_040");
MsgDisp("Hiiragi","It was a line from 'Habataki Castle:
Flames Rising'. It was 'Our souls are
eternal! That way together!'");
ChEye(5,3);
ChMouth(5,3);
ChMotion(5,0);
VoicePlay("G020540001_05_050");
MsgDisp("Hiiragi","Isn't that perfect!");
MsgDisp("主人公","Hehe, it is cute.");
ChEye(5,4);
ChMouth(5,4);
VoicePlay("G020540001_05_060");
MsgDisp("Hiiragi","If the people of Habataki City are
starting to acknowledge me, even if it's
just a little, I'd be happy.");
MsgDisp("主人公","Yeah, that must be it.");
MsgDisp("主人公","(I'm happy that ｛柊＊＊＊｝'s best
efforts got through to everyone......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(5,#1);
ChMouthOpenLevel(5,#1);
ChCheek(5,0);
