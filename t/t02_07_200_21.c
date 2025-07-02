ChEye(7,5);
ChMouth(7,1);
ChMotion(7,5);
VoicePlay("T020720021_07_000");
MsgDisp("Mikage","Y-y......you∋");
MsgDisp("主人公","Ah, sorry.
but......");
ChEye(7,4);
ChMouth(7,4);
ChMotion(7,0,1);
VoicePlay("T020720021_07_010");
MsgDisp("Mikage","Does that mean you'll accept my feelings?");
MsgDisp("主人公","Yes.
I don't think I can express it in words.
So......");
ChEye(7,2);
ChMouth(7,3);
ChMotion(7,2);
ChCheek(7,6);
VoicePlay("T020720021_07_020");
MsgDisp("Mikage","I see, I think you expressed it perfcetly
just now. Thank you.");
MsgDisp("主人公","Me too...... Thank you so much for always
being with me.");
ChEye(7,2);
ChMouth(7,3);
ChMotion(7,0);
ChCheek(7,0);
VoicePlay("T020720021_07_030");
MsgDisp("Mikage","Oh, 
I have to thank those guys too.");
MsgDisp("主人公","Yes!");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
ChEyeOpenLevel(7,10);
VoicePlay("T020720021_07_040");
MsgDisp("Mikage","My precious, serious girl.
We're graduating Haba School together.");
MsgDisp("主人公","Hey, that nickname——");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
ChEyeOpenLevel(7,8);
VoicePlay("T020720021_07_050");
MsgDisp("Mikage","What, is it no good?");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(7,0,0);
Wait(120,0);
StlOpen("ev_07_16");
ScrFadeIn(0);
VoicePlay("T020720021_07_060");
MsgDisp("Mikage","Well then, my prized beauty.
Let me see your face.");
MsgDisp("主人公","Yes......");
VoiceEVSPlay(7);
VoicePlay("T020720021_07_070");
MsgDisp("Mikage","｛主人公｝, I love you.");
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
