ChLayout(1);
MsgClose();
ChOpen(3,255,4,4,4,#1,#1,0,0);
VoicePlay("G020310001_03_000");
MsgDisp("Honda","Hey, do you think I talk too much when I'm
with you?");
MsgDisp("主人公","Why are you asking all of a sudden?");
ChEye(3,4);
ChMouth(3,2);
ChMotion(3,2);
VoicePlay("G020310001_03_010");
MsgDisp("Honda","Sometimes when I'm with my family, I end
up talking too much and it gets annoying
for them.");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,0);
VoicePlay("G020310001_03_020");
MsgDisp("Honda","The other day, my sister was worried.
She asked if I do the same thing when I'm
with you.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,1);
ChEyeOpenLevel(3,0);
VoicePlay("G020310001_03_030");
MsgDisp("Honda","And when I told her I probably do, maybe
even more so with you, she got mad at me.");
MsgDisp("主人公","Hehe!");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,5);
VoicePlay("G020310001_03_040");
MsgDisp("Honda","Ah, that!
When you laugh like thatー I can't help
but keep talking");
ChSet(3,0);
VoicePlay("G020310001_03_050");
MsgDisp("Honda","So if you ever get bored or want to change
the topic, give me a sign.");
MsgDisp("主人公","A sign?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,1);
VoicePlay("G020310001_03_060");
MsgDisp("Honda","Yeah!
My sister's sign is to stay silent with a
straight face for five seconds.");
ChMouth(3,3);
VoicePlay("G020310001_03_070");
MsgDisp("Honda","When she does that, I either stop talking
or change the subject.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
VoicePlay("G020310001_03_080");
MsgDisp("Honda","Wanna try it?
Look at me with a straight face and stay
silent for five seconds.");
MsgDisp("主人公","O-Okay. ......");
ChEye(3,5);
ChMouth(3,3);
ChMotion(3,4);
ChCheek(3,5);
VoicePlay("G020310001_03_090");
MsgDisp("Honda","H...
Huh?");
MsgDisp("主人公","Eh, did something happen?");
ChEye(3,4);
ChMouth(3,0);
ChCheek(3,8);
VoicePlay("G020310001_03_100");
MsgDisp("Honda","It's strange, my heart's starting to beat
really loudly...");
MsgDisp("主人公","(Looks like it had an unexpected effect?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(3,#1);
ChMouthOpenLevel(3,#1);
ChCheek(3,0);
