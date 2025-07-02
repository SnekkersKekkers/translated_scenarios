MsgClose();
ChOpen(1,255,0,0,0,-1,-1,0,0);
ChMotion(1,1);
VoicePlay("G020120301_01_000");
MsgDisp("Kazama","Do you think fireflies, like people,
gather around the popular ones?");
MsgDisp("主人公","Yeah, that might be the case.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G020120301_01_010");
MsgDisp("Kazama","What? why are you talking about as if
it's someone else's problem? 
I'm talking about you.");
MsgDisp("主人公","Eh?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("G020120301_01_020");
MsgDisp("Kazama","You should be more aware. 
Do you realize how strong your pull is?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,4);
ChEyeOpenLevel(1,8);
VoicePlay("G020120301_01_030");
MsgDisp("Kazama","Think about my side of things......");
MsgDisp("主人公","｛風真＊＊｝ there are many girls
around you at school and Simon too, 
you know?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("G020120301_01_040");
MsgDisp("Kazama","Heh, that's an interesting perspective.
It makes me feel a bit better.");
MsgDisp("主人公","Hey.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G020120301_01_050");
MsgDisp("Kazama","My bad.
But it's a bit different with me.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("G020120301_01_060");
MsgDisp("Kazama","I'm happy to be appreciated by customers
at work. But at school, they're interested
because of my background or family, right?
It's annoying.");
MsgDisp("主人公","I don't think that's the case.");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(12,0);
ChEye(1,0);
ChMouth(1,2);
VoicePlay("G020120301_01_070");
MsgDisp("Kazama","The only person I want to be appreciated
by at school is you. I don't care about
the others.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020120301_01_080");
MsgDisp("Kazama","......But, it's completely different for
you. Everyone likes you unconditionally.
Your family background is irrelevant.");
MsgDisp("主人公","That's not true......
But, thank you.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020120301_01_090");
MsgDisp("Kazama","Haa, it doesn't seem like my worries will
end.");
MsgDisp("主人公","｛風真＊＊｝ you're liked by both boys 
and girls, and even by the elderly. 
You're really amazing.");
ChMotion(1,0);
Wait(12,0);
ChEye(1,2);
ChMouth(1,3);
VoicePlay("G020120301_01_100");
MsgDisp("Kazama","That's completely off, but thanks.");
MsgDisp("主人公","(｛風真＊＊｝, you don't even know how
popular you are......?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,-1);
ChMouthOpenLevel(1,-1);
ChCheek(1,0);
