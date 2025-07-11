BGMStop();
MsgDisp("主人公","I'm sorry......");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("T020700030_07_000");
MsgDisp("Mikage","I see.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("T020700030_07_010");
MsgDisp("Mikage","I was the one in the wrong. I said
something stupid.");
MsgDisp("主人公","That......");
BGMPlay("BGM_C07_MIKAGE_B",0.01);
Wait(40,0);
ChEye(7,2);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("T020700030_07_020");
MsgDisp("Mikage","I relied on you until the very end.");
ChEye(7,4);
ChMouth(7,4);
ChMotion(7,3);
VoicePlay("T020700030_07_030");
MsgDisp("Mikage","But thanks to you,
I was able to graduate from Haba High.
Thank you.");
MsgDisp("主人公","I am happy that I was able to spend three
years with ｛御影＊＊｝ and graduate with
him.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("T020700030_07_040");
MsgDisp("Mikage","Hey, don't make me cry even at the end,
my precious, serious girl.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("T020700030_07_050");
MsgDisp("Mikage","......Thank you for filling a big void
within me.");
BGMStop(3.5);
MsgClose();
ScrFadeOut(0,1,120);
ChClose(7,0,0);
Wait(120);
