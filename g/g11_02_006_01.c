MsgClose();
BGOpen("sc601",0);
ScrFadeIn(0);
SEPlay("EV_SE_628");
SEWait();
BGMPlay("BGM_C02_SASSA_A");
ChOpen(2,41,3,0,0,#1,#1,0,0);
VoiceEVSPlay(2);
VoicePlay("G110200601_02_000");
MsgDisp("Sassa","｛主人公｝, how was my time?");
MsgDisp("主人公","Same as always.
How is it that you always get the same
time when you run?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("G110200601_02_010");
MsgDisp("Sassa","My stride, breathing, and form are all the
same as usual.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("G110200601_02_020");
MsgDisp("Sassa","But, my seniors gave me a push at the
Inter-High, so I think I'll go harder.");
MsgDisp("主人公","Yes.
But, don't push yourself too hard.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,1);
VoicePlay("G110200601_02_030");
MsgDisp("Sassa","Unreasonable and reckless are my
specialties.
Well, I'm off now!");
MsgDisp("主人公","(Hehe!
｛颯砂＊＊｝, you seem to be having a lot
more fun than before?)");
MsgClose();
ScrFadeOut(0);
MsgClose();
ChClose(2,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev002",0);
BGMVol(0.5,2);
ChOpen(2,100,2,1,1,#1,#1,0,0);
SEPlay("EV_SE_FOOT_037");
ScrFadeIn(0);
VoiceEVSPlay(2);
VoicePlay("G110200601_02_040");
MsgDisp("Sassa","｛主人公｝.
Has there been any change in my form?");
MsgDisp("主人公","Umm...
No, I don't think anything's changed.");
ChEye(2,0);
ChMouth(2,1);
ChMotion(2,0);
VoicePlay("G110200601_02_050");
MsgDisp("Sassa","That time, my senior told me to take the
stopper that was in place off.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("G110200601_02_060");
MsgDisp("Sassa","So I'm looking forward to seeing what kind
of changes will come out from now on.");
MsgDisp("主人公","I see, I'll pay attention just so I can
see even the smallest of changes.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,1);
VoicePlay("G110200601_02_070");
MsgDisp("Sassa","As expected of my manager!
Then, I'll push myself for the last ten
minutes.");
BGMStop();
SEStop("EV_SE_FOOT_037",2);
MsgClose();
ScrFadeOut(0,0);
MsgDisp("主人公","(｛颯砂＊＊｝, It seems like you're more
motivated now than ever.
I'm looking forward to your next record!)");
MsgClose();
ChClose(2,0,0);
