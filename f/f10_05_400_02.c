BGOpen("sc510",0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("F100540002_05_000");
MsgDisp("Hiiragi","Yes, please.");
VoicePlay("F100540002_07_000");
MsgDisp("Mikage","Then, let's do it today after school.");
MsgDisp("主人公","Ah, ｛柊＊＊＊｝ and ｛御影＊＊｝?");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(5,254,4,0,4,#1,#1,0,1);
ChOpen(7,254,0,0,0,#1,#1,0,2);
MsgDisp("主人公","If you two are together, then...");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("F100540002_05_010");
MsgDisp("Hiiragi","We're having Hiyashi Chuuka.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("F100540002_07_010");
MsgDisp("Mikage","Do you want to come too?
It's after school.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0,1);
VoicePlay("F100540002_05_020");
MsgDisp("Hiiragi","Mikage-sensei is treating us to Hiyashi
Chuuka at a store he recommends.");
MsgDisp("主人公","so that's it! I think I'lll pass. Because
I might not be able to eat dinner
otherwise.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("F100540002_07_020");
MsgDisp("Mikage","Well, actually the light vinegar soy sauce
lets you eat as many bowls as you want.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("F100540002_05_030");
MsgDisp("Hiiragi","I may also be dining together with
everyone tonight, so I shall go for the
vinegar soy sauce.");
MsgDisp("主人公","Ehh? you're having a group meal... will
that be alright?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("F100540002_07_030");
MsgDisp("Mikage","Yeah, actually, the vinegar soy sauce one
is so light, one bowl will make you
hungry. Rest assured.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4,1);
VoicePlay("F100540002_05_040");
MsgDisp("Hiiragi","It is incredible that it will actually
make you hungry...
what happens if I ate two bowls?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0,1);
VoicePlay("F100540002_07_040");
MsgDisp("Mikage","Why don't you try it?");
ChEye(5,0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoiceEVSPlay(7);
VoicePlay("F100540002_07_050");
MsgDisp("Mikage","｛主人公｝, that's why you should rest
assured. Dinner will be even more
delicious than usual.");
MsgDisp("主人公","Ummm...?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("F100540002_07_060");
MsgDisp("Mikage","Then, it's decided.
I'll see you two later.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(7);
ChMotion(5,0);
ChPosition(5,0);
Wait(60,0);
ChEye(5,0);
ChMouth(5,4);
VoicePlay("F100540002_05_050");
MsgDisp("Hiiragi","It is amazing that you get hungry after
eating. I'm looking forward to it. See
you.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(5);
MsgDisp("主人公","(｛柊＊＊＊｝, there is no way that is
true...!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
