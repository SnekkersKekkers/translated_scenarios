BGOpen("wf100",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Alright...
Should I head home now?)");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChNanaType(0);
ChOpen(4,255,0,0,0,#1,#1,0,0);
MsgDisp("主人公","Ah, ｛七ツ森＊｝, what a coincidence!");
VoicePlay("E010530100_04_000");
MsgDisp("Nanatsumori","Yo.
Have you happened to see a skull bear
keychain around here?");
MsgDisp("主人公","Eh...?");
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,1,1);
VoicePlay("E010530100_04_010");
MsgDisp("Nanatsumori","You just made a face that said 'again? '.
...Well, I guess 'again' is right.");
MsgDisp("主人公","Hehe.
Shall we look for it together?");
SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
ChPosition(4,2);
Wait(40,0);
MsgClose();
ChOpen(5,255,3,3,2,#1,#1,0,1,0,30);
VoicePlay("E010530100_05_000");
MsgDisp("Hiiragi","Nanatsumori-kun.
Oh, and you're here as well.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("E010530100_05_010");
MsgDisp("Hiiragi","Right, I believe you dropped this.");
SEPlay("EV_SE_641",0,0.8);
SEWait();
ChEye(4,5);
ChMouth(4,2);
ChMotion(4,3,1);
VoicePlay("E010530100_04_020");
MsgDisp("Nanatsumori","Ah, there it is!
That's my skull bear.
Yano-san you really saved me...");
MsgDisp("主人公","Thank goodness ｛柊＊＊＊｝ picked it up.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("E010530100_05_020");
MsgDisp("Hiiragi","Yes.
I saw it fall from Nanatsumori-kun's
pocket, so I went after him.");
ChMotion(5,4);
ChEye(4,3);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("E010530100_04_030");
MsgDisp("Nanatsumori","Thanks so much.
This one's the gold version so it's really
rare.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("E010530100_05_030");
MsgDisp("Hiiragi","No problem at all.
By the way, is this bear popular?");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("E010530100_04_040");
MsgDisp("Nanatsumori","It's not just a bear, it's a skull bear.");
MsgDisp("主人公","It has bone designs on its face and body.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("E010530100_05_040");
MsgDisp("Hiiragi","I see, so it's a skull and a bear...");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("E010530100_05_050");
MsgDisp("Hiiragi","...But I once saw a gift a patron gave me,
and it didn't have any bones on it.");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
MsgDisp("主人公","Well, that's...");
VoicePlay("E010530100_04_050");
MsgDisp("Nanatsumori","Ahh, no doubt about it. It must have been
the fallen angel version. That one's super
rare!");
ChEye(5,3);
ChMouth(5,2);
ChMotion(5,4);
VoicePlay("E010530100_05_060");
MsgDisp("Hiiragi","Really?");
ChEye(4,4);
ChMouth(4,4);
ChMotion(4,0,1);
VoicePlay("E010530100_04_060");
MsgDisp("Nanatsumori","It's rare, alright.
I wish I could even just see one...");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("E010530100_05_070");
MsgDisp("Hiiragi","Would you like to?");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("E010530100_04_070");
MsgDisp("Nanatsumori","Are you sure?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("E010530100_05_080");
MsgDisp("Hiiragi","Yes, anytime that's convenient for you.
You're welcome to come too.");
ChEye(4,3);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("E010530100_04_080");
MsgDisp("Nanatsumori","Okay, then when we're all free, we can go
together.");
MsgDisp("主人公","Umm...is it really alright?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("E010530100_05_090");
MsgDisp("Hiiragi","Of course.
I don't often have people over at my
house, so I'm happy to invite you.");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("E010530100_04_090");
MsgDisp("Nanatsumori","Yano-san you're my idol.
Thank you so much～...");
ChMotion(5,4);
MsgDisp("主人公","(Is it possible ｛柊＊＊＊｝ and
｛七ツ森＊｝ will become closer because
of skull bear? Hehe, I'm glad!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
