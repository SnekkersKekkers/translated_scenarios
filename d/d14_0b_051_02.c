ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ChCheek(1,0);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
ChCheek(4,0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ChCheek(3,0);
MsgDisp("主人公","Hey, did you catch the show yesterday?");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("D140B05102_04_000");
MsgDisp("Nanatsumori","Ah, that. The music show where they
collabbed with different artists. It was
super good.");
ChMouth(1,2);
ChEyeOpenLevel(1,8);
ChMouth(3,4);
MsgDisp("主人公","Their outfits were so cool too!");
ChEye(4,3);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("D140B05102_04_010");
MsgDisp("Nanatsumori","Oh, you have a good eye for this huh?");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,2,1);
VoicePlay("D140B05102_04_020");
MsgDisp("Nanatsumori","... You guys sure are quiet.
Did you not watch it");
ChEyeOpenLevel(1,0);
VoicePlay("D140B05102_01_000");
MsgDisp("Kazama","I did not.");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,4,1);
VoicePlay("D140B05102_03_000");
MsgDisp("Honda","Sorry, I didn't watch it either.
I was changing the water in the fish tank.");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("D140B05102_04_030");
MsgDisp("Nanatsumori","I see.
That's a pity.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("D140B05102_01_010");
MsgDisp("Kazama","Not really.
I wouldn't call it a pity.");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("D140B05102_04_040");
MsgDisp("Nanatsumori","Shy are you sulking?");
ChSet(3,0,1);
VoicePlay("D140B05102_03_010");
MsgDisp("Honda","Ryo-kun, did you actually want to watch
it?");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,3);
VoicePlay("D140B05102_01_020");
MsgDisp("Kazama","Why are you saying that?
Honda, you're on my side right?");
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,1,1);
VoicePlay("D140B05102_04_050");
MsgDisp("Nanatsumori","So it's jealousy.
What a pain in the assー.");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("D140B05102_01_030");
MsgDisp("Kazama","Yeah, I'm aware of it.");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("D140B05102_04_060");
MsgDisp("Nanatsumori","So you're becoming defiant.
Oh dear.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
ChEyeOpenLevel(3,0);
VoicePlay("D140B05102_03_020");
MsgDisp("Honda","Then, let's resume our fun lunch time♪");
MsgDisp("主人公","(So ｛風真＊＊｝ actually
wanted to watch it too.
But, they mentioned jealousy...?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
ChClose(3,0,0);
ChClose(4,0,0);
