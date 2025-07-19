BGOpen("ex300",2);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChLayout(1);
BGMPlay("BGM_XMAS_TRHEE",0.01);
MsgClose();
ChNanaType(#1);
ChOpen(4,255,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Waa...!
The illumination is beautiful!
The blue world is expanding...");
ChMouth(4,3);
VoicePlay("B140400000_04_000");
MsgDisp("Nanatsumori","Yeah.
It's amazing.");
ChMouth(4,0);
ChMotion(4,1,1);
ChCheek(4,3);
VoicePlay("B140400000_04_010");
MsgDisp("Nanatsumori","Hey, have you noticed?");
MsgDisp("主人公","Eh?");
ChMotion(4,0,1);
VoicePlay("B140400000_04_020");
MsgDisp("Nanatsumori","What day it is today?");
MsgDisp("主人公","The 25th of December, so Christmas Day?");
VoicePlay("B140400000_04_030");
MsgDisp("Nanatsumori","What about yesterday?");
MsgDisp("主人公","Christmas eve.
The school Christmas party was fun, huh?");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("B140400000_04_040");
MsgDisp("Nanatsumori","...Pfft!");
MsgDisp("主人公","Eh...
Did I say something weird?");
VoicePlay("B140400000_04_050");
MsgDisp("Nanatsumori","No, I just thought that was so like you.");
MsgDisp("主人公","???");
ChMotion(4,0,1);
ChCheek(4,5);
VoicePlay("B140400000_04_060");
MsgDisp("Nanatsumori","I'm just so happy because I got to spend
Christmas Eve and Christmas with you.");
MsgDisp("主人公","Ah...");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("B140400000_04_070");
MsgDisp("Nanatsumori","It's fine.
I like you like this.");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,3,1);
ChCheek(4,8);
VoiceEVSPlay(4);
VoicePlay("B140400000_04_080");
MsgDisp("Nanatsumori","｛主人公｝, Merry Christmas.
I hope I can say this to you again next
year.");
MsgDisp("主人公","｛七ツ森＊｝, Merry Christmas.");
MsgDisp("主人公","(I see, I've spent both today and
yesterday with ｛七ツ森＊｝.
My heart is racing a little...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
