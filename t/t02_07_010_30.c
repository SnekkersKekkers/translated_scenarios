BGMStop();
MsgDisp("主人公","I'm sorry......");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("T020701030_07_000");
MsgDisp("Mikage","I see.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,4);
VoicePlay("T020701030_07_010");
MsgDisp("Mikage","I was the one in the wrong.
I said something stupid.");
MsgDisp("主人公","That......");
BGMPlay("BGM_C07_MIKAGE_B",0.01);
Wait(40,0);
ChEye(7,2);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("T020701030_07_020");
MsgDisp("Mikage","I was acting spoiled until the end");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
VoicePlay("T020701030_07_030");
MsgDisp("Mikage","...... Thanks to you, I graduated from
Haba High.
Thank you.");
MsgDisp("主人公","Me too—— I'm happy for the last three
years I spent with
｛御影＊＊｝. and the fact
we got to graduate together.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("T020701030_07_040");
MsgDisp("Mikage","Hey, don't make me cry even at the end, my
precious serious girl.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
ChEyeOpenLevel(7,8);
VoicePlay("T020701030_07_050");
MsgDisp("Mikage","......Thank you for filling a void within
me.");
BGMStop(3.6);
MsgClose();
ScrFadeOut(0,1,120);
ChClose(7,0,0);
Wait(120);
