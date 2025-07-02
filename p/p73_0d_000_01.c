BGMStop();
BGOpen("sc740",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(This year we're doing party dresses.
I have to emit elegance...)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
SEWait();
ChOpen(21,254,0,0,0,-1,-1,0,1);
ChOpen(22,254,0,3,3,-1,-1,0,2);
ChMotion(22,5,1);
VoicePlay("P730D00001_22_000");
MsgDisp("Hikaru","Oohーlala! Mari!");
ChEye(21,4);
ChMouth(21,3);
ChMotion(21,4);
VoicePlay("P730D00001_21_000");
MsgDisp("Michiru","Lovely...
It really suits you.");
MsgDisp("主人公","｛ひかる＊｝,｛みちる＊｝.
Did you come to watch the show?");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
ChEyeOpenLevel(22,0);
VoicePlay("P730D00001_22_010");
MsgDisp("Hikaru","Yep yep! It somewhat feels like we're
working together▼");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("P730D00001_21_010");
MsgDisp("Michiru","Hehe.
Mari puts even models to shame, huh?");
MsgDisp("主人公","That...");
ChEye(22,3);
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
SEPlay("EV_SE_038");
SEWait();
VoicePlay("P730D00001_21_020");
MsgDisp("Michiru","Have fun.");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("P730D00001_22_020");
MsgDisp("Hikaru","Mari is a princess today! Right?");
MsgDisp("主人公","(Princess... huh?
Alright, I have to look gorgeous!)");
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChClose(21,0,0);
ChClose(22,0,0);
BGOpen("sc725",0);
ScrFadeIn(0);
