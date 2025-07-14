MsgClose();
ChOpen(5,255,0,0,4,#1,#1,0,0);
ChMouth(5,2);
ChMotion(5,4);
VoicePlay("G020510300_05_000");
MsgDisp("Hiiragi","Huh? Are they gathering around us?");
MsgDisp("主人公","They really are......I wonder why?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("G020510300_05_010");
MsgDisp("Hiiragi","That reminds me, a similar thing occurred
when we were on that sightseeing boat.");
MsgDisp("主人公","Hehe, yes.
A lot of seagulls gathered around us.");
ChMotion(5,3);
Wait(24,1);
ChEye(5,4);
ChMouth(5,4);
VoicePlay("G020510300_05_020");
MsgDisp("Hiiragi","Yes.
And look here, too.");
SEPlay("EV_SE_714");
SEWait();
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("G020510300_05_030");
MsgDisp("Hiiragi","Just like the stage and the deck, we're on
a wooden platform.");
MsgDisp("主人公","Is this your spirit as an actor,
｛柊＊＊＊｝?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("G020510300_05_040");
MsgDisp("Hiiragi","Yes. The seagulls were impromptu
participants, but these fireflies might be
part of the special effects.");
ChEye(5,0);
ChMouth(5,3);
ChMotion(5,4);
VoicePlay("G020510300_05_050");
MsgDisp("Hiiragi","We're the leading roles.
So, what kind of stage shall we create?");
MsgDisp("主人公","Hehe!");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(5,#1);
ChMouthOpenLevel(5,#1);
ChCheek(5,0);
