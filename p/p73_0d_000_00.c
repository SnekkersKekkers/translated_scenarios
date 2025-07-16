BGMStop();
BGOpen("sc740",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(This year it's a runway of casual wear...
I'm nervous...)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
SEWait();
ChOpen(21,254,0,0,0,#1,#1,0,1);
ChOpen(22,254,0,0,3,#1,#1,0,2);
ChMotion(22,4,1);
VoicePlay("P730D00000_22_000");
MsgDisp("Hikaru","Hii～
Mari!
How are preparations?");
MsgDisp("主人公","｛ひかる＊｝, ｛みちる＊｝...");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,4);
VoicePlay("P730D00000_21_000");
MsgDisp("Michiru","Hehe, you seem nervous, huh?");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("P730D00000_22_010");
MsgDisp("Hikaru","It'll be alーright!
If Mari is like her usual biiig smiling
self, it'll be a huge success ♪");
MsgDisp("主人公","Y-Yeah.");
ChEye(21,4);
ChMouth(21,0);
ChMotion(21,3);
VoicePlay("P730D00000_21_010");
MsgDisp("Michiru","Calm down.
Alright, take a deep breath.");
MsgDisp("主人公","Phew...");
SEPlay("EV_SE_038");
SEWait();
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("P730D00000_21_020");
MsgDisp("Michiru","It's alright, we'll be watching over you.");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("P730D00000_22_020");
MsgDisp("Hikaru","Yep yep.
Are hearts are always together▼");
MsgDisp("主人公","Thank you...!");
MsgDisp("主人公","(Alright, let's do our best!)");
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChClose(21,0,0);
ChClose(22,0,0);
BGOpen("sc725",0);
ScrFadeIn(0);
