MsgDisp("主人公","｛七ツ森＊｝ do you listen to music?
What kind of music do you like?");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("B070400000_04_200");
MsgDisp("Nanatsumori","I mostly listen to mainstream stuff,
but sometimes I listen to indie songs
that people upload on video sites.");
MsgDisp("主人公","Indie songs from video sites?");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("B070400000_04_210");
MsgDisp("Nanatsumori","Yeah.
To put it in simple terms, it's a
song made by an amateur.");
ChEye(4,0);
ChMouth(4,0);
VoicePlay("B070400000_04_220");
MsgDisp("Nanatsumori","Although recently, there are
quite a few people who became famous
from there and made a real debut.");
MsgDisp("主人公","Wow, that's amazing!");
ChEye(4,0);
ChMouth(4,2);
ChMotion(4,2,1);
VoicePlay("B070400000_04_230");
MsgDisp("Nanatsumori","Well, I'm similar to them
in a sense-");
MsgDisp("主人公","Hmm?");
ChEye(4,0);
ChMouth(4,2);
ChMotion(4,0,1);
ChEyeOpenLevel(4,1);
ChCheek(4,5);
VoicePlay("B070400000_04_240");
MsgDisp("Nanatsumori","......");
ChEye(4,0);
ChMouth(4,4);
ChCheek(4,0);
VoicePlay("B070400000_04_250");
MsgDisp("Nanatsumori","Try listening to them if you feel like it.
There are so many of them that
you might find one that you like.");
MsgDisp("主人公","(A lot of things about this make me
curious.)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
