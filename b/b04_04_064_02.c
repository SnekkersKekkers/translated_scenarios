BGOpen("wf700",2);
ChLayout(1);
ChEye(4,2);
ChMouth(4,0);
ChMotion(4,0);
ChEyeOpenLevel(4,8);
ScrFadeIn(0);
ChMotion(4,1,1);
VoicePlay("B040406402_04_000");
MsgDisp("Nanatsumori","There are lots of people this year...");
MsgDisp("主人公","Yeah, that's right.");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("B040406402_04_010");
MsgDisp("Nanatsumori","Don't drift so far away.
It'll be a big problem if you got lost.");
MsgDisp("主人公","Hey, I won't get lost!");
ChEye(4,2);
VoicePlay("B040406402_04_020");
MsgDisp("Nanatsumori","Please listen to me seriously.
I'll be very troubled.");
ChEye(4,0);
ChMotion(4,0,1);
VoicePlay("B040406402_04_030");
MsgDisp("Nanatsumori","We can keep in contact with our phones,
but before that, if you were to get mixed
up with some dopey people...");
ChEye(4,4);
ChMouth(4,2);
ChMotion(4,2,1);
VoicePlay("B040406402_04_040");
MsgDisp("Nanatsumori","Or, if you ran into another guy from our
school...");
MsgDisp("主人公","｛七ツ森＊｝...");
MsgDisp("主人公","Are you jealous?");
ChEye(4,5);
ChMouth(4,5);
ChMotion(4,0,1);
VoicePlay("B040406402_04_050");
MsgDisp("Nanatsumori","!");
ChEye(4,4);
ChMouth(4,4);
ChMotion(4,2,1);
ChCheek(4,5);
VoicePlay("B040406402_04_060");
MsgDisp("Nanatsumori","...Geez, this girl...");
ChEye(4,4);
ChMouth(4,1);
ChMotion(4,0,1);
VoicePlay("B040406402_04_070");
MsgDisp("Nanatsumori","I'm worried about your wellbeing!
Me!");
MsgDisp("主人公","Yeah.
I'm sorry, okay?
I'll be careful, so don't get angry.");
ChEye(4,4);
ChMouth(4,4);
ChMotion(4,2,1);
ChCheek(4,8);
VoicePlay("B040406402_04_080");
MsgDisp("Nanatsumori","I'm not mad.
I'm just worrying too much on my own
accord.");
MsgDisp("主人公","Thank you.");
ChEye(4,0);
ChMouth(4,4);
ChMotion(4,0,1);
VoicePlay("B040406402_04_090");
MsgDisp("Nanatsumori","That's why, your hand.
Let me hold them.");
SEPlay("EV_SE_504");
SEWait();
VoicePlay("B040406402_04_100");
MsgDisp("Nanatsumori","So that even if anything happens, we won't
get separated.");
MsgDisp("主人公","Yeah.");
MsgClose();
ScrFadeOut(0,0);
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,0,1);
ChEyeOpenLevel(4,10);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ScrFadeIn(0);
ChMotion(4,1,1);
VoicePlay("B040406402_04_110");
MsgDisp("Nanatsumori","Ahh, hey.
You've got cotton candy stuck next to your
mouth.");
MsgDisp("主人公","Eh, really?");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("B040406402_04_120");
MsgDisp("Nanatsumori","...Yeah, I'll take it off.
I wonder if this is how Fathers with
daughters feelー...");
MsgDisp("主人公","Ah, you're treating me like a child!");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("B040406402_04_130");
MsgDisp("Nanatsumori","Haha!");
SEPlay("EV_SE_022",1);
SEWait();
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,3,1);
VoicePlay("B040406402_04_140");
MsgDisp("Nanatsumori","The fireworks are starting!
Let's go!");
MsgClose();
ChClose(4,0,30);
SEPlay("EV_SE_FOOT_RUN_AWAY_TWO");
ScrQuake(1);
MsgDisp("主人公","Waa, ｛七ツ森＊｝ You're
running too fast～!
You're letting go of my hand.");
VoicePlay("B040406402_04_150");
MsgDisp("Nanatsumori","I won't let go, so it's alright.");
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
