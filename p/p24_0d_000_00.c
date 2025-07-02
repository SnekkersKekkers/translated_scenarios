BGMPlay("BGM_CINEMA_ACTION",0.01,0.5);
BGOpen("sc745",0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("P240D00000_47_000");
MsgDisp("Opponent","I detest it... I detest those happy
couples～! I'll interrupt their dates, And
ruin their love lives!");
VoicePlay("P240D00000_22_000");
MsgDisp("Hikaru?","I won't let you do that.");
VoicePlay("P240D00000_47_010");
MsgDisp("Opponent","Who's that!");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(21,38,1,0,4,-1,-1,0,1);
SEPlay("EV_SE_544");
ChOpen(22,38,0,0,3,-1,-1,0,2);
VoicePlay("P240D00000_21_000");
MsgDisp("Michiru","You interfere with people's love lives, 
You should be kicked by a horse!");
VoicePlay("P240D00000_47_020");
MsgDisp("Opponent","Curse you!
\"Flora Angels\"
Stop interfering～∈");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,5,1);
VoicePlay("P240D00000_22_010");
MsgDisp("Hikaru","The star of lovers▼
Purple Angel!");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,4);
VoicePlay("P240D00000_21_010");
MsgDisp("Michiru","The guardian of love.
Pink Angel!");
MsgDisp("主人公","A beginner of love...? Love hunter,
White angel!");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,1,1);
ChEyeOpenLevel(22,0);
VoicePlay("P240D00000_22_020");
MsgDisp("Hikaru","Taaake th--is!");
ChEye(21,3);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("P240D00000_21_020");
MsgDisp("Michiru","Finishing move!");
MsgDisp("主人公","'Love heart forever!'
Take that!");
SEPlay("EV_SE_810",0,0.8);
ScrFadeOut(0,1,60);
VoicePlay("P240D00000_47_030");
MsgDisp("Opponent","Curse youuuuu!
Even I want to fall in love!");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,0);
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,0);
ScrFadeIn(0);
SEStop("EV_SE_810",2);
VoicePlay("P240D00000_21_030");
MsgDisp("Michiru","Jealousy bombs don't scare us!");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
ChEyeOpenLevel(22,0);
VoicePlay("P240D00000_22_030");
MsgDisp("Hikaru","We'll break them right away!");
MsgDisp("主人公","We'll always be the warriors of love!");
VoicePlay("P240D00000_47_040");
MsgDisp("Opponent","Ugh, this light...! the huge bomb is
disappearing...! Ah, I feel my heart
filling up with love......");
SEPlay("EV_SE_809",0,0.8);
SEWait();
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("P240D00000_22_040");
MsgDisp("Hikaru","Aha▼
It's a win for Hikaru and her friends～♪");
ChEye(21,4);
ChMouth(21,3);
ChMotion(21,4);
VoicePlay("P240D00000_21_040");
MsgDisp("Michiru","We protected the lovers again. 
Thank goodness...");
MsgDisp("主人公","Yeah...
Hooray, it was a great success1");
BGMStop(2);
SEPlay("EV_SE_GAYA_021");
Wait(160,0);
VoicePlay("P240D00000_49_000");
MsgDisp("Narrarator","And so, the lovers in this town were
protected. But their fight continues......
until the Flora Angels find love
themselves.");
ChEye(22,4);
ChMouth(22,1);
ChMotion(22,4,1);
ChEyeOpenLevel(22,10);
VoicePlay("P240D00000_22_050");
MsgDisp("Hikaru","Eh, is that so∋");
SEPlay("EV_SE_GAYA_006",0,0.8);
Wait(50,0);
ChEye(21,4);
ChMouth(21,4);
ChMotion(21,5);
ChCheek(21,10);
VoicePlay("P240D00000_21_050");
MsgDisp("Michiru","No way, that's embarassing...");
MsgDisp("主人公","(I didn't know that's how it ended...
no one told me!)");
SEStop("EV_SE_GAYA_006",1);
BGMStop();
SEStop("EV_SE_GAYA_028",1);
MsgClose();
ScrFadeOut(0,0);
ChClose(21);
ChClose(22);
