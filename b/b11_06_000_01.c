MsgClose();
ChClose(6,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Huh, ｛氷室＊＊｝ Still hasn't come
yet?");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
VoicePlay("B110600001_34_000");
MsgDisp("Guy","What's wrong, are you waiting?");
MsgClose();
SEPlay("EV_SE_557",0.2);
ChOpen(34,254,0,0,0,#1,#1,0,0);
MsgDisp("主人公","Eh?
Ah, yeah.
I'm supposed to be meeting with someone...");
ChEye(34,0);
ChMouth(34,0);
VoicePlay("B110600001_34_010");
MsgDisp("Guy","This time will be slower.
Your friend may also take a while to
load...");
MsgDisp("主人公","...Yes?");
ChEye(34,0);
ChMouth(34,0);
VoicePlay("B110600001_34_020");
MsgDisp("Guy","You don't know? That's better. There's no
need to distinguish between virtuality and
reality.");
MsgDisp("主人公","Ummmm?
... Ah, ｛氷室＊＊｝!");
ChPosition(34,2);
SEPlay("EV_SE_550");
BGMPlay("BGM_PLACE_BEACH",0.01);
MsgClose();
ChOpen(6,31,0,0,0,#1,#1,0,1,0,30);
VoicePlay("B110600001_06_000");
MsgDisp("Himuro","Sorry I'm late.");
ChEye(34,2);
ChMouth(34,2);
VoicePlay("B110600001_34_030");
MsgDisp("Guy","Are you real?
You're not an avatar?");
MsgDispSksp(1,5);
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,4);
VoicePlay("B110600001_06_010");
MsgDisp("Himuro","? What's with this guy?");
MsgDispSksp(0);
MsgDisp("主人公","Umm... maybe he's lost?");
ChEye(34,0);
ChMouth(34,0);
VoicePlay("B110600001_34_040");
MsgDisp("Guy","Exactly. I've been lost in the sea of
information for 10 years. Finally, I've
found you. Now, let's go surfing the net
together———");
MsgDispSksp(1,5);
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,1);
ChEyeOpenLevel(6,0);
VoicePlay("B110600001_06_020");
MsgDisp("Himuro","You were dealing with \"this\"?
In that outfit?");
MsgDispSksp(0);
ChEye(34,2);
ChMouth(34,2);
VoicePlay("B110600001_34_050");
MsgDisp("Guy","By \"this\", are you referring to me?");
MsgDispSksp(1,5);
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B110600001_06_030");
MsgDisp("Himuro","It's enough to refer to anyone who hides
their face with a hood and sunglasses to
deceive people as \"this\". If you don't
like it, act properly.");
MsgDispSksp(0);
ChEye(34,1);
ChMouth(34,1);
VoicePlay("B110600001_34_060");
MsgDisp("Guy","Ugh...
Ahhh, the lag is too much, I'm going home!");
SEPlay("EV_SE_580");
MsgClose();
ChClose(34);
ChPosition(6,0);
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("B110600001_06_040");
MsgDisp("Himuro","Honestly... people like that lower the
quality of the sea.");
MsgDisp("主人公","Um, ｛氷室＊＊｝...
Thank you.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
ChCheek(6,10);
VoicePlay("B110600001_06_050");
MsgDisp("Himuro","It was nothing.
But you were the one who dealt with him.
And with that outfit on..");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B110600001_06_060");
MsgDisp("Himuro","No, sorry.
It was my fault for being late.");
MsgDisp("主人公","No.
Next time I'll be more careful.");
ChEye(6,3);
ChMouth(6,4);
ChMotion(6,0);
ChEyeOpenLevel(6,0);
ChCheek(6,0);
VoicePlay("B110600001_06_070");
MsgDisp("Himuro","Yeah... do that.");
