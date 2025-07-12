ChLayout(1);
MsgClose();
ChOpen(3,255,0,4,4,#1,#1,0,0);
VoicePlay("G020320301_03_000");
MsgDisp("Honda","Hey, I have... 
a bit of a question for you.");
MsgDisp("主人公","Yeah, what is it?");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,1);
VoicePlay("G020320301_03_010");
MsgDisp("Honda","So, recently a classmate saw us
walking together.");
ChMouth(3,4);
ChMotion(3,4);
VoicePlay("G020320301_03_020");
MsgDisp("Honda","They asked me a bunch of questions,
so I explained what we talked about.
But their reactions were kind of weird.");
MsgDisp("主人公","What kind of explanation did you give?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,2);
VoicePlay("G020320301_03_030");
MsgDisp("Honda","I mentioned how we talked about eel
behavior and sardine schooling after
visiting the aquarium—ah.");
ChEye(3,2);
ChMouth(3,4);
ChMotion(3,0);
VoicePlay("G020320301_03_040");
MsgDisp("Honda","Maybe I didn't need to go into 
the rising sea surface temperatures part?");
ChEye(3,4);
ChMotion(3,4);
VoicePlay("G020320301_03_050");
MsgDisp("Honda","Do you think they were more interested
in the ecology stuff than
environmental issues?");
MsgDisp("主人公","Hmm......
Maybe that's not the kind of 
things they wished to hear.");
ChEye(3,5);
ChMouth(3,4);
ChMotion(3,5);
VoicePlay("G020320301_03_060");
MsgDisp("Honda","Ehh∋ Then what kind of things did they
want to hear?");
MsgDisp("主人公","Umm, for example......
things like holding hands or having a
good time together......");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,0);
VoicePlay("G020320301_03_070");
MsgDisp("Honda","Other people like hearing about that?
I see, so that's how it is.");
ChMotion(3,2);
VoicePlay("G020320301_03_080");
MsgDisp("Honda","But is that really a thing you need to
tell others?");
MsgDisp("主人公","(Ugh...... that's a good point.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(3,#1);
ChMouthOpenLevel(3,#1);
ChCheek(3,0);


