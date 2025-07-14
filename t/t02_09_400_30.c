BGMStop();
MsgDisp("主人公","I'm sorry......");
ChEye(9,0);
ChMouth(9,4);
ChMotion(9,0,1);
ChEyeOpenLevel(9,10);
ChMouthOpenLevel(9,0);
VoicePlay("T020940030_09_000");
MsgDisp("Kuya","............");
ChEye(9,0);
ChMouth(9,4);
ChEyeOpenLevel(9,0);
VoicePlay("T020940030_09_010");
MsgDisp("Kuya","I see.");
BGMPlay("BGM_C09_KUYA_B",0.01);
Wait(60);
ChEye(9,2);
ChMouth(9,0);
ChMotion(9,2,1);
VoicePlay("T020940030_09_020");
MsgDisp("Kuya","I was in awe of your kindness, but it
wasn't directed at just me.");
ChEye(9,4);
ChMouth(9,4);
ChEyeOpenLevel(9,0);
VoicePlay("T020940030_09_030");
MsgDisp("Kuya","I'm sorry for the misunderstanding.");
MsgDisp("主人公","Kuya-kun......");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,4,1);
ChEyeOpenLevel(9,6);
VoicePlay("T020940030_09_040");
MsgDisp("Kuya","Thank you for everything.
I feel like I've changed, even just a
little, thanks to you.");
ChEye(9,4);
ChMouth(9,0);
ChMotion(9,0,1);
VoicePlay("T020940030_09_050");
MsgDisp("Kuya","Even with this ending, it doesn't change
the fact that you're special to me.");
ChEye(9,4);
ChMouth(9,4);
ChMotion(9,0,1);
VoicePlay("T020940030_09_060");
MsgDisp("Kuya","If we get accepted to the same university,
we might cross paths a few times
there......");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,4,1);
ChEyeOpenLevel(9,0);
VoicePlay("T020940030_09_070");
MsgDisp("Kuya","But, I would be happy if you would smile
like you have until now ......okay?");
BGMStop(3.6);
MsgClose();
ScrFadeOut(0,1,120);
ChClose(9,0,0);
Wait(120);
