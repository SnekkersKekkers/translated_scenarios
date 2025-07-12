BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Ugh... what a massive fail.
Even though that was my 
last high school performance...)");
MsgClose();
SEPlay("EV_SE_544",0,0.5);
ChOpen(21,254,0,0,4,#1,#1,0,1);
SEPlay("EV_SE_544",0,0.5);
ChOpen(22,254,0,2,0,#1,#1,0,2);
VoicePlay("P540D00005_21_000");
MsgDisp("Michiru","...Good work.");
VoicePlay("P540D00005_22_000");
MsgDisp("Hikaru","It didn't go as you wanted, huh?");
MsgDisp("主人公","Ugh...");
ChEye(21,4);
ChMouth(21,4);
ChMotion(21,4);
VoicePlay("P540D00005_21_010");
MsgDisp("Michiru","Your performance... even though it was
like that, I think it's amazing you
continued with the wind music club for
three years.");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,5,1);
VoicePlay("P540D00005_22_010");
MsgDisp("Hikaru","Yeah.
MAri is amazing!");
MsgDisp("主人公","Thanks...");
ChEye(21,4);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("P540D00005_21_020");
MsgDisp("Michiru","This will be a good memory too.
So, lift your head up.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("P540D00005_22_020");
MsgDisp("Hikaru","Right, right!
The future will shine even brighter!");
MsgDisp("主人公","(｛みちる＊｝, ｛ひかる＊｝...
My last performance was a failure, 
but I'm glad I continued with
the wind music club!)");
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChClose(21,0,0);
ChClose(22,0,0);
