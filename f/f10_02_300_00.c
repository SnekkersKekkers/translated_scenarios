BGOpen("sc310",0);
ChLayout(2);
ScrFadeIn(0);
MsgDisp("主人公","(Ah, ｛みちる＊｝,
｛ひかる＊｝ and...
｛颯砂＊＊｝? )");
BGMPlay("BGM_HANYOU_A",0.01);
MsgClose();
ChOpen(2,254,0,0,2,#1,#1,0,0,0,30);
ChOpen(22,254,0,0,3,#1,#1,0,1,0,30);
ChOpen(21,254,0,0,0,#1,#1,0,2,0,30);
MsgDisp("主人公","What are you three talking about?");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,5,1);
VoicePlay("F100230000_22_000");
MsgDisp("Hikaru","Mari!
You came in at a good time～♪");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,3);
VoicePlay("F100230000_21_000");
MsgDisp("Michiru","Hehe.
I guess we should ask Mari for her opinion
here too, right?");
ChEye(2,0);
ChMouth(2,2);
ChMotion(2,2);
VoicePlay("F100230000_02_000");
MsgDisp("Sassa","Hey, that's enough.");
MsgDisp("主人公","What's up.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("F100230000_22_010");
MsgDisp("Hikaru","We're talking about Sassa-kun's gap moe.");
ChEye(2,5);
ChMouth(2,2);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,0);
VoicePlay("F100230000_21_010");
MsgDisp("Michiru","That's right.
Sassa-kun is the epitome of gap moe.");
MsgDisp("主人公","...Gap moe?");
ChMotion(22,4,1);
VoicePlay("F100230000_22_020");
MsgDisp("Hikaru","That's no good, Mari. when we're talking
about Sassa-kun, you can't leave this out.");
ChEye(21,4);
ChMouth(21,3);
ChMotion(21,4);
VoicePlay("F100230000_21_020");
MsgDisp("Michiru","Right.
He has an image of being big and strong,
but he's afraid of ghosts.");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,5);
VoicePlay("F100230000_02_010");
MsgDisp("Sassa","Hang on, Michiru-san.
I don't know who you heard this from, but
I'm not especially scared of them.");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("F100230000_22_030");
MsgDisp("Hikaru","Hehe, isn't that good? I'm saying that's
his charm. It's cute that a strong-looking
person is easily scared.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,5);
MsgDisp("主人公","So that's the gap...");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("F100230000_21_030");
MsgDisp("Michiru","Yes, there are many others.
For example——");
ChEye(2,5);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("F100230000_02_020");
MsgDisp("Sassa","I said that's enough.
Look, classes are starting.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(2);
ChEye(22,0);
ChMouth(22,2);
ChMotion(22,0,1);
VoicePlay("F100230000_22_040");
MsgDisp("Hikaru","It seems that he's not aware of it
himself.");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("F100230000_21_040");
MsgDisp("Michiru","Hehe, that's why it's good.");
MsgDisp("主人公","(I see, ｛颯砂＊＊｝'s gap...)");
BGMStop();
MsgClose();
ScrFadeOut(0);
