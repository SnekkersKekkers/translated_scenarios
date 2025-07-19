BGOpen("sc310",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(There's still time left of break, so
maybe I'll go to the library?)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
BGOpen("sc330",0);
ScrFadeIn(0);
VoicePlay("F100210002_46_000");
MsgDisp("Librarian","\"Exercise Learning Theory in Practice\" is
scheduled to arrive next month.");
VoicePlay("F100210002_02_000");
MsgDisp("Sassa?","Is that so...?");
MsgDisp("主人公","(It's ｛颯砂＊＊｝. \"
Exercise Learning Theory in Practice\"...)");
BGOpen("sc330",0);
MsgClose();
ChOpen(2,254,0,0,4,#1,#1,0,0);
BGMPlay("BGM_C02_SASSA_A",0.01);
ScrFadeIn(0);
VoicePlay("F100210002_02_010");
MsgDisp("Sassa","Yo, so it's you.
Are you returning that top ranked book?");
MsgDisp("主人公","It looks like you couldn't borrow the
\"Exercise Learning Theory in Practice\",
｛颯砂＊＊｝?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("F100210002_02_020");
MsgDisp("Sassa","What, you heard that?");
MsgDisp("主人公","If they're just gonna be substitutes for
dumbbells, shouldn't anything be fine?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("F100210002_02_030");
MsgDisp("Sassa","I'm a track-and-field idiot, but I still
use my head a bit.");
MsgDisp("主人公","But, it seems like a difficult book.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("F100210002_02_040");
MsgDisp("Sassa","Yeah, it's written in a difficult way
about how you should rest properly and eat
properly after putting stress on your body
through training.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("F100210002_02_050");
MsgDisp("Sassa","Well, when it's written in a book like
this, it kind of backs up what you're
already doing, and it's a bit of a relief.");
MsgDisp("主人公","Wow...you're amazing, ｛颯砂＊＊｝.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("F100210002_02_060");
MsgDisp("Sassa","Really? Well, they still are like
dumbbells after all. See you.");
MsgDisp("主人公","Hehe, yeah.
Do your best!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(2);
MsgDisp("主人公","(｛颯砂＊＊｝ is amazing...
He's giving it his all with his whole body
and mind.)");
MsgClose();
ScrFadeOut(0);
