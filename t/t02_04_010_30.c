ChEye(4,4);
ChMouth(4,4);
BGMStop();
MsgDisp("主人公","I'm sorry......
I......");
ChEye(4,4);
ChMouth(4,4);
ChMotion(4,0);
VoicePlay("T020401000_04_320");
MsgDisp("Nanatsumori","......I got it.
You don't have to say any more.");
MsgDisp("主人公","｛七ツ森＊｝......");
BGMPlay("BGM_C04_NANA_B",0.01);
Wait(40,0);
ChMotion(4,0,1);
VoicePlay("T020401000_04_330");
MsgDisp("Nanatsumori","Can we still be friends?");
MsgDisp("主人公","Yes.");
ChEye(4,2);
ChMouth(4,3);
VoicePlay("T020401000_04_340");
MsgDisp("Nanatsumori","......Thank you.
That's enough.");
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,1,1);
VoicePlay("T020401000_04_350");
MsgDisp("Nanatsumori","I may have said this before, but I'll say
it again.");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,3,1);
VoicePlay("T020401000_04_360");
MsgDisp("Nanatsumori","My high school life was so much fun thanks
to you.
Thank you for everything until now.");
BGMStop(3.6);
MsgClose();
ScrFadeOut(0,1,120);
ChClose(4,0,0);
Wait(120);
