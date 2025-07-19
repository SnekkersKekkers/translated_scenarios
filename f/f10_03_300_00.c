BGOpen("sc510",0);
ChLayout(2);
ScrFadeIn(0);
VoicePlay("F100330000_22_000");
MsgDisp("Hikaru?","Thank you～♪");
VoicePlay("F100330000_21_000");
MsgDisp("Michiru?","I'm really happy to receive support from
girls in elementary and middle school.");
VoicePlay("F100330000_03_000");
MsgDisp("Honda?","Really?
My little sister will be happy too!");
MsgDisp("主人公","(Ah...it's ｛本多＊＊｝, ｛ひかる＊｝
and ｛みちる＊｝'s voices.)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
BGOpen("sc520",0);
MsgClose();
SEWait();
ChOpen(3,254,0,0,0,#1,#1,0,1,0,30);
ChOpen(22,254,0,0,3,#1,#1,0,0,0,30);
ChOpen(21,254,0,0,0,#1,#1,0,2,0,30);
BGMPlay("BGM_HANYOU_A",0.01);
ScrFadeIn(0);
MsgDisp("主人公","What are you three talking about?");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,5,1);
VoicePlay("F100330000_22_010");
MsgDisp("Hikaru","Ah, Mari!
I just received a fan letter from
Honda-kun.");
MsgDisp("主人公","From ｛本多＊＊｝?");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,3);
VoicePlay("F100330000_21_010");
MsgDisp("Michiru","Hikaru, it's not from Honda-kun, it's from
his little sister?");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
ChEyeOpenLevel(22,0);
VoicePlay("F100330000_22_020");
MsgDisp("Hikaru","That's right, it's a super cute letter♪");
ChMouth(21,0);
MsgDisp("主人公","I see, so ｛本多＊＊｝'s sister is a fan of
you two?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("F100330000_03_010");
MsgDisp("Honda","Right, right, in her room she has a poster
of her two favourite idols, Hikachan and
Chiruchan hung up.");
ChEye(22,0);
ChMouth(22,1);
ChMotion(22,0,1);
ChEyeOpenLevel(22,6);
VoicePlay("F100330000_22_030");
MsgDisp("Hikaru","Hey, stop calling me that?");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("F100330000_03_020");
MsgDisp("Honda","Eh?
Can I not call you Hikachan and Chiruchan?
My sister calls you that.");
ChEye(22,2);
ChMouth(22,0);
ChMotion(22,0,1);
VoicePlay("F100330000_22_040");
MsgDisp("Hikaru","Don't make your little sister call us
weird names!");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,4);
VoicePlay("F100330000_21_020");
MsgDisp("Michiru","Hehe, it's alright isn't it?
Well, for your little sister to call us
that anyways.");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("F100330000_03_030");
MsgDisp("Honda","Eh, then what about me?");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("F100330000_21_030");
MsgDisp("Michiru","Hmm.
What do you think, Mari?");
ChEye(22,0);
MsgDisp("主人公","Umm...
They're pretty huge nicknames.");
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("F100330000_03_040");
MsgDisp("Honda","Really?
I like them, though");
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,4,1);
VoicePlay("F100330000_22_050");
MsgDisp("Hikaru","The only one who likes them is Dahon.");
MsgDisp("主人公","(Pika-chan, Chiru-chan, Dahon, Mari...
I wonder what other people would think if
they heard that?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
