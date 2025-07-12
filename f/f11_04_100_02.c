BGOpen("sc710",0);
ChLayout(1);
ScrFadeIn(0);
MsgClose();
ChNanaType(0);
ChOpen(4,254,0,0,3,#1,#1,0,0);
VoicePlay("F110410002_04_000");
MsgDisp("Nanatsumori","Yo.");
MsgDisp("主人公","Ah, ｛七ツ森＊｝.
You going around this year?");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("F110410002_04_010");
MsgDisp("Nanatsumori","Yep.
Last year, there was a situation,
so this year, I'm lost.");
MsgDisp("主人公","Oh, well... this year, you
can enjoy the festival even more, right?");
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,2,1);
VoicePlay("F110410002_04_020");
MsgDisp("Nanatsumori","I guess.
But...");
MsgDisp("主人公","?");
ChEye(4,5);
ChMouth(4,4);
ChMotion(4,0,1);
VoicePlay("F110410002_04_030");
MsgDisp("Nanatsumori","Ah, that's right!
Are you free now?");
MsgDisp("主人公","Right now?
I'm free.");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("F110410002_04_040");
MsgDisp("Nanatsumori","Well then, how about we try going
together? Until last year, I was always
sad and alone.");
MsgDisp("主人公","Haha, sure.");
ChMotion(4,0,1);
VoicePlay("F110410002_04_050");
MsgDisp("Nanatsumori","Right.
Um, where to start?
Whatever you want.");
MsgDisp("主人公","OK!
Then, let's start at the sweets stand
and go around.");
ChEye(4,3);
ChMouth(4,3);
ChMotion(4,3,1);
VoicePlay("F110410002_04_060");
MsgDisp("Nanatsumori","Alright. Let's go!");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
ChClose(4,0,30);
MsgDisp("主人公","(Yeah!
I'll help ｛七ツ森＊｝ enjoy himself!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
