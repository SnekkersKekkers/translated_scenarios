BGOpen("wf310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(2);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ChNanaType(0);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
ScrFadeIn(0);
MsgDisp("主人公","Ah, a big shark is coming!
I wonder if the little fish are okay...");
ChMouth(1,2);
ChEye(4,2);
ChMouth(4,1);
ChMotion(4,1,1);
VoicePlay("B330B10200_04_000");
MsgDisp("Nanatsumori","Eh?
Crap, aren't the little ones going to get
eaten?");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,3);
VoicePlay("B330B10200_01_000");
MsgDisp("Kazama","Calm down you two.
That shark isn't interested.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("B330B10200_03_000");
MsgDisp("Honda","Right right. The fish in this aquarium
have adapted to this place, and are
changing their way of life.");
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,0,1);
VoicePlay("B330B10200_04_010");
MsgDisp("Nanatsumori","...Which means?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("B330B10200_01_010");
MsgDisp("Kazama","As he is satisfied with his food, he
doesn't chase after the fleeing small
fish.");
ChSet(3,3,1);
VoicePlay("B330B10200_03_010");
MsgDisp("Honda","Ding ding ding!
Ryo-kun, you're spot on.");
MsgDisp("主人公","Heeh...!");
ChMotion(4,1,1);
VoicePlay("B330B10200_04_020");
MsgDisp("Nanatsumori","They definitely won't be eaten?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("B330B10200_01_020");
MsgDisp("Kazama","There's definitely exceptions.
Like if something really delicious was
right in front of them.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,1,1);
ChEyeOpenLevel(3,0);
VoicePlay("B330B10200_03_020");
MsgDisp("Honda","Right right. Even humans can't help but
look if something extremely charming came
into their view right?");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
Wait(60,1);
MsgDisp("主人公","Hm?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("B330B10200_03_030");
MsgDisp("Honda","...Right?");
ChEye(4,4);
ChMouth(4,4);
VoicePlay("B330B10200_04_030");
MsgDisp("Nanatsumori","...Right.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0,1);
ChEyeOpenLevel(1,7);
VoiceEVSPlay(1);
VoicePlay("B330B10200_01_030");
MsgDisp("Kazama","｛主人公｝, be careful.");
VoicePlay("B330B10200_03_040");
MsgDisp("Honda","Even Ryo-kun is looking.");
ChEyeOpenLevel(1,0);
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("B330B10200_04_040");
MsgDisp("Nanatsumori","No, Kazama is the one looking the most.");
MsgDisp("主人公","(???)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,7);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,7);
ChEyeOpenLevel(3,#1);
ChMouthOpenLevel(3,#1);
ChCheek(3,0);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,7);
ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
