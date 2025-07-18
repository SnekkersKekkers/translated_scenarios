BGOpen("sc220",0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("F102220000_31_000");
MsgDisp("Goro?","It's about time to head home now.");
MsgDisp("主人公","(Eh?
That voice...)");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(22,254,0,0,0,#1,#1,0,1,0,30);
ChOpen(31,254,0,0,0,#1,#1,0,2,0,30);
MsgDisp("主人公","I thought so!
｛ひかる＊｝ and...
Goro-sensei∋");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,5,1);
VoicePlay("F102220000_22_000");
MsgDisp("Hikaru","Ha～i, Mari!");
ChEye(31,3);
ChMouth(31,3);
ChMotion(31,3);
VoicePlay("F102220000_31_010");
MsgDisp("Goro","Mari?
Ohh, so you're Mari...
She's cute.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("F102220000_22_010");
MsgDisp("Hikaru","Ehe▼
Hikaru was the one who gave her the name♪");
ChEye(31,2);
ChMouth(31,2);
ChMotion(31,2);
VoicePlay("F102220000_31_020");
MsgDisp("Goro","I see.
As expected, you have great naming sense.");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,0);
VoicePlay("F102220000_31_030");
MsgDisp("Goro","Oh my, my.
I have to get going home now.
See you～.");
MsgClose();
SEPlay("EV_SE_626");
ChClose(31);
ChPosition(22,0);
MsgDisp("主人公","Why is Goro-sensei in this sort of
place...?");
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,4,1);
VoicePlay("F102220000_22_020");
MsgDisp("Hikaru","Huh?
He sometimes sneaks in though.
Have you never seen him, Mari?");
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,0,1);
VoicePlay("F102220000_22_030");
MsgDisp("Hikaru","Well, he is a Habataki Alumnus.
So I guess that makes him an authorized
person～?");
MsgDisp("主人公","(I heard that Goro-sensei is acquainted to
the Haba High School chairman...maybe he
came to see him? )");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
