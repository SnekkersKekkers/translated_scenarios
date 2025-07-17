MsgClose();
ChOpen(5,255,0,4,4,#1,#1,0,0);
VoicePlay("G020510101_05_000");
MsgDisp("Hiiragi","The overflowing light...
It's beautiful, right?");
MsgDisp("主人公","Yeah...");
ChEye(5,2);
ChMotion(5,4);
ChEyeOpenLevel(5,9);
VoicePlay("G020510101_05_010");
MsgDisp("Hiiragi","...If only this place were a bit more
secretive, I would have wanted us to have
it all to ourselves.");
MsgDisp("主人公","Eh?");
ChEye(5,3);
ChEyeOpenLevel(5,#1);
VoicePlay("G020510101_05_020");
MsgDisp("Hiiragi","Heheh.
I like that expression of yours.");
ChEye(5,0);
ChMotion(5,0);
VoicePlay("G020510101_05_030");
MsgDisp("Hiiragi","Speaking of having something to
oneself...
You're not just mine either?");
MsgDisp("主人公","｛柊＊＊＊｝...?");
ChEye(5,4);
VoicePlay("G020510101_05_040");
MsgDisp("Hiiragi","But I believe I'm the closest person to
you.
Am I right?");
MsgDisp("主人公","Umm...");
ChMotion(5,4);
VoicePlay("G020510101_05_050");
MsgDisp("Hiiragi","I'm sorry to the others, but I have no
intention of giving up being by your side.");
MsgDisp("主人公","(Others... Somewhat, today I get the
feeling ｛柊＊＊＊｝, is
different to usual...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(5,#1);
ChMouthOpenLevel(5,#1);
ChCheek(5,0);
