BGOpen("ex000",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Phew.
Today was another productive day.)");
SEPlay("EV_SE_FOOT_RUN_COME_TWO");
SEWait();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(21,255,0,0,0,#1,#1,0,1);
ChOpen(22,255,0,0,3,#1,#1,0,2);
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
ChEyeOpenLevel(22,0);
VoicePlay("D100D00000_22_000");
MsgDisp("Hikaru","Ma～ri▼
A flower has bloomed in the garden of your
heart♪");
MsgDisp("主人公","Eh∋ ｛ひかる＊｝, ｛みちる＊｝! My
heart's......garden?");
ChEye(21,4);
ChMouth(21,0);
ChMotion(21,4);
VoicePlay("D100D00000_21_000");
MsgDisp("Michiru","That's right. A new feeling has been born
in Mari's pure maiden heart. ......Haven't
you noticed?");
ChEye(22,2);
ChMouth(22,3);
ChMotion(22,2,1);
VoicePlay("D100D00000_22_010");
MsgDisp("Hikaru","Sis, Mari is too innocent, it'll make her
feel uncomfortable so...
That's whyー......");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("D100D00000_22_020");
MsgDisp("Hikaru","Hikaru calls it the Garden of Mari's
heart—— Hikaru can tell you what goes on
in \"Mari's Garden\"♪");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,3);
VoicePlay("D100D00000_21_010");
MsgDisp("Michiru","The garden is a bit lonely right now but
maybe someday it will be beautiful?");
MsgDisp("主人公","(Mari's Garden......My maiden heart?
If I call ｛ひかる＊｝, she can tell
me what's going on!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
