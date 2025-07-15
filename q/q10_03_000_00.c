BGMPlay("BGM_PLACE_TRAVEL");
BGOpen("sc822",0);
MsgClose();
ChOpen(3,254,3,3,3,#1,#1,0,0);
ChLayout(1);
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
ScrFadeIn(0);
VoiceEVSPlay(3);
VoicePlay("Q100300000_03_000");
MsgDisp("Honda","｛主人公｝, Look! They're glasses.");
MsgDisp("主人公","They really are round, huh?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,4,1);
VoicePlay("Q100300000_03_010");
MsgDisp("Honda","It's a beautiful archway. Even though it's
been restored, it's amazing how the shape
hasn't changed for centuries.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("Q100300000_03_020");
MsgDisp("Honda","...Do you also feel a bit weird when you
realize we're looking at the same thing as
people centuries ago?");
MsgDisp("主人公","I do, I mean, it's been here forever.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("Q100300000_03_030");
MsgDisp("Honda","Yeah. Maybe our ancestors too, came to see
the Glasses Bridge like this.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("Q100300000_03_040");
MsgDisp("Honda","Coming together would be impossible, but
maybe passing each other on the bridge or
something?");
MsgDisp("主人公","｛本多＊＊｝...... Are you telling romantic
stories today?");
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,4,1);
VoicePlay("Q100300000_03_050");
MsgDisp("Honda","Huh? You got it?");
MsgDisp("主人公","Eeeh?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("Q100300000_03_060");
MsgDisp("Honda","Actually, I was thinking yesterday about
what I could talk about at the Glasses
Bridge.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,1,1);
ChEyeOpenLevel(3,0);
VoicePlay("Q100300000_03_070");
MsgDisp("Honda","Like, I have so much to tell you, so I was
in trouble.");
MsgDisp("主人公","Hehe, I never knew.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("Q100300000_03_080");
MsgDisp("Honda","You seem to enjoy my explanations, but
I've decided to talk today about what I
feel, not what I know.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("Q100300000_03_090");
MsgDisp("Honda","Then, you praised me for being romantic.
I did it!");
MsgDisp("主人公","(So you're always thinking about me while
talking......
Thank you, ｛本多＊＊｝ )");
MsgClose();
ScrFadeOut(0);
ChClose(3);
