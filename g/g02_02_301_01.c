MsgClose();
ChOpen(2,255,0,0,0,#1,#1,0,0);
VoicePlay("G020230101_02_000");
MsgDisp("Sassa","It seems like things have been livelier
around you recently.");
MsgDisp("主人公","Eh, what makes you say that all of a
sudden?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("G020230101_02_010");
MsgDisp("Sassa","Seeing the fireflies reminded me.
There are places where the light gather.
It's exactly like that.");
MsgDisp("主人公","I see...");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("G020230101_02_020");
MsgDisp("Sassa","I'm happy about it.
It means everyone is recognizing your
charm, right?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("G020230101_02_030");
MsgDisp("Sassa","It feels good, you know, seeing the
correct information about you spread.");
MsgDisp("主人公","But, if you're surrounded by a lot of
people like those fireflies over there, it
might be a bit overwhelming...");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("G020230101_02_040");
MsgDisp("Sassa","True, it could be a problem if the number
of people around you keeps increasing.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("G020230101_02_050");
MsgDisp("Sassa","But thinking that I have you all to myself
right now makes me appreciate it even
more.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("G020230101_02_060");
MsgDisp("Sassa","Alright, I need to make our time together
even more meaningful.");
MsgDisp("主人公","(It's true, I might have made more friends
without realizing it...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(2,#1);
ChMouthOpenLevel(2,#1);
ChCheek(2,0);
