MsgClose();
ChOpen(2,255,0,0,0,#1,#1,0,0);
VoicePlay("G020210306_02_000");
MsgDisp("Sassa","So, this place is called cold spring
right? It's not quite a hot spring, just a
little warm water bubbling up.");
MsgDisp("主人公","Thanks to that, the fireflies can live
longer here, right?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("G020210306_02_010");
MsgDisp("Sassa","Yeah, it's like a hot spring for the
fireflies.");
MsgDisp("主人公","I see.
You do love baths, ｛颯砂＊＊｝.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("G020210306_02_020");
MsgDisp("Sassa","Well, yeah.
Hot springs, saunas, public baths......
they all feel nice.");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("G020210306_02_030");
MsgDisp("Sassa","Ah jacuzzis too, right?");
MsgDisp("主人公","Hm?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("G020210306_02_040");
MsgDisp("Sassa","Oh, did you forget?
The jacuzzi in the heated poolー.");
MsgDisp("主人公","Ahh!
It felt like we had our own private hot
spring.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("G020210306_02_050");
MsgDisp("Sassa","Exactly!
That was awesome. ー.");
MsgDisp("主人公","Did something happen?");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("G020210306_02_060");
MsgDisp("Sassa","There is.
Well, I've gotten quite resistant to it
now.");
ChEye(2,0);
ChMouth(2,2);
ChMotion(2,3);
ChEyeOpenLevel(2,7);
VoicePlay("G020210306_02_070");
MsgDisp("Sassa","But even now, if I'm caught off guard in a
swimsuit, I still can't handle it.......");
MsgDisp("主人公","(Resistant......?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(2,#1);
ChMouthOpenLevel(2,#1);
ChCheek(2,0);
