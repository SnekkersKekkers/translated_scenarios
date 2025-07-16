ChEye(3,5);
ChMouth(3,4);
ChMotion(3,4,1);
ChCheek(3,10);
VoicePlay("T020320000_03_230");
MsgDisp("Honda","...... Just now......
It was soft and, I could smell you......
and——");
MsgDisp("主人公","You......don't need to elaborate anymore!");
ChEye(3,2);
ChMouth(3,3);
ChMotion(3,2,1);
VoicePlay("T020320000_03_240");
MsgDisp("Honda","I don't need to tell those two about that,
right?");
MsgDisp("主人公","Eh, don't tell them.∋");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,1,1);
ChCheek(3,0);
VoicePlay("T020320000_03_250");
MsgDisp("Honda","Sorry.
I see, that's right.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,4,1);
VoicePlay("T020320000_03_260");
MsgDisp("Honda","But, does that mean it's an OK to my
confession?");
MsgDisp("主人公","Yes.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,5,1);
VoicePlay("T020320000_03_270");
MsgDisp("Honda","Yay!
Now, let's do that again.");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(3,0,0);
Wait(120,0);
StlOpen("ev_03_17");
ScrFadeIn(0);
VoicePlay("T020320000_03_280");
MsgDisp("Honda","I love you.");
StlEffect(1,1,60);
Wait(60,0);
SEPlay("EV_SE_695");
Wait(120,0);
MsgClose();
ScrFadeOut(0,1,120);
StlClose();
Wait(160,0);
SEStop("EV_SE_695",3.5);
Wait(220,0);
