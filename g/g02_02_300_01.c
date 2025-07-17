MsgClose();
ChOpen(2,255,0,0,0,#1,#1,0,0);
VoicePlay("G020230001_02_000");
MsgDisp("Sassa","The one who's watching the fireflies with
you is me.");
MsgDisp("主人公","Y-Yeah.
What's this out of the blue?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("G020230001_02_010");
MsgDisp("Sassa","I was talking with Ryota and Inori.
They wanted to hear your inner thoughts
here.");
MsgDisp("主人公","Then...did you hear something?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("G020230001_02_020");
MsgDisp("Sassa","Nope, not at all. But just being here with
you is what matters. So I win.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("G020230001_02_030");
MsgDisp("Sassa","I'm going to tell them that I came here
with you right away.");
MsgDisp("主人公","Ehh?
You're telling them?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("G020230001_02_040");
MsgDisp("Sassa","Yeah.
Inori might not believe me, so I'll need
you to back me up.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("G020230001_02_050");
MsgDisp("Sassa","... Same goes for Ryota.
If they come, it's exactly as I predicted.");
ChEye(2,4);
ChMouth(2,3);
ChMotion(2,3);
ChEyeOpenLevel(2,0);
VoicePlay("G020230001_02_060");
MsgDisp("Sassa","Heheh.");
MsgDisp("主人公","(\"｛颯砂＊＊｝, are you enjoying
yourself...?\"");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(2,#1);
ChMouthOpenLevel(2,#1);
ChCheek(2,0);
