ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ChCheek(3,0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ChCheek(1,0);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
ChCheek(4,0);
VoiceEVSPlay(1);
VoicePlay("D140B03200_01_010");
MsgDisp("Kazama","｛主人公｝, pass the salt.");
MsgDisp("主人公","Ah, yes.
Here you go.");
ChMouth(1,3);
VoicePlay("D140B03200_01_020");
MsgDisp("Kazama","Thank you.");
ChMouth(1,0);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("D140B03200_04_010");
MsgDisp("Nanatsumori","Even though you 
could get it yourself.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("D140B03200_03_010");
MsgDisp("Honda","That's right.");
MsgDisp("主人公","Now, now.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ChEyeOpenLevel(1,0);
VoicePlay("D140B03200_01_030");
MsgDisp("Kazama","It's fine.
This is natural for us.");
ChEye(4,4);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("D140B03200_04_020");
MsgDisp("Nanatsumori","Those words seem loadedー.");
ChEyeOpenLevel(1,#1);
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,4,1);
VoicePlay("D140B03200_03_020");
MsgDisp("Honda","I see.
Since you guys are childhood friends,
right?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("D140B03200_01_040");
MsgDisp("Kazama","Well yeah.
We ate together often at lunch time on
kindergarten field trips.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("D140B03200_03_030");
MsgDisp("Honda","That's nice.
I wish we were childhood friends too.");
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,0,1);
VoicePlay("D140B03200_04_030");
MsgDisp("Nanatsumori","...Kazama somewhat has a smug look on his
face.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("D140B03200_01_050");
MsgDisp("Kazama","Not really.
There's nothing there, what are you
talking about?");
MsgDisp("主人公","(I don't really remember but...
It seems like it's better that I don't say
that.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
ChClose(3,0,0);
ChClose(4,0,0);
