MsgClose();
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,2);
VoicePlay("G020410100_04_000");
MsgDisp("Nanatsumori","Hmm...");
MsgDisp("主人公","What's wrong?
Worried about something?");
VoicePlay("G020410100_04_010");
MsgDisp("Nanatsumori","I am worried... I guess. I guess it
is something you should be worried about.");
MsgDisp("主人公","Can I ask what it's about?");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("G020410100_04_020");
MsgDisp("Nanatsumori","Mhmm.
Yeah, it's a question for you.");
MsgDisp("主人公","Okay.");
ChMotion(4,1,1);
VoicePlay("G020410100_04_030");
MsgDisp("Nanatsumori","How does it feel to have something
everyone likes all to yourself?");
MsgDisp("主人公","Let's see... I guess it depends?");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("G020410100_04_040");
MsgDisp("Nanatsumori","Well, I guess that makes sense.
Maybe happy? Maybe awkward?");
MsgDisp("主人公","Hmm...");
ChEye(4,0);
ChMouth(4,0);
ChMouthOpenLevel(4,0);
VoicePlay("G020410100_04_050");
MsgDisp("Nanatsumori","…………");
MsgDisp("主人公","……｛七ツ森＊｝?");
ChMotion(4,1,1);
ChMouthOpenLevel(4,#1);
VoicePlay("G020410100_04_060");
MsgDisp("Nanatsumori","I guess awkward, but... I guess
it's mostly happy.");
MsgDisp("主人公","?");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("G020410100_04_070");
MsgDisp("Nanatsumori","So I'm very happy right now.
Okay?");
MsgDisp("主人公","(...Right now? 
What are you keeping all to yourself? 
Me??)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
