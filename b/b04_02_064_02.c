BGOpen("wf700",2);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3,1);
ScrFadeIn(0);
VoicePlay("B040206402_02_000");
MsgDisp("Sassa","Woah...That guy in the Yakisoba stall was
cracking eggs one after another with just
one hand.");
MsgDisp("主人公","It was really amazing!");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("B040206402_02_010");
MsgDisp("Sassa","The street food vendors are always so
skillful that I can't help but watch them.");
MsgDisp("主人公","Yeah, I know what you mean.
It's like watching good craftsmanship.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("B040206402_02_020");
MsgDisp("Sassa","Yeah, it's really cool.
It's like they've mastered a skill");
MsgDisp("主人公","｛颯砂＊＊｝ is a master too,
though?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
ChEyeOpenLevel(2,9);
VoicePlay("B040206402_02_030");
MsgDisp("Sassa","Well I still have a long way to go.
... But——");
SEPlay("EV_SE_534",0,1);
Wait(60,1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0,1);
VoicePlay("B040206402_02_040");
MsgDisp("Sassa","Looks like it's starting soon.");
SEStop("EV_SE_527",2);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("B040206402_02_050");
MsgDisp("Sassa","Alright, in respect to that guy let's go
buy some toppings!");
MsgDisp("主人公","(｛颯砂＊＊｝, weren't you about to say
something?)");
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChClose(2,0,0);
