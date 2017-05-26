import QtQuick 1.0
import QtMultimediaKit 1.1 // do not forgot to import this

Item {
    id: videoPlayerItem
    property bool isVideoPlaying: videoPlayer.hasVideo // property to know if videoPlaying id ongoing or not
    /*
      Functions Which starts Video Playing
      */
    function playVideo(){
        videoPlayer.play()
    }
    /*
      Function Which Stops Video Playing
      */
    function stopVideo(){
        videoPlayer.stop()
    }
    /*
      Function Which Stops Video Playing
      */
    function pauseVideo(){
        videoPlayer.pause()
    }
    /*
      Actual QML based Video Component
      */
    Video{
        id:videoPlayer
        anchors.fill: videoPlayerItem // never forget to mention the size and position
        source: "Video/Bear.wmv"
        focus: true
    }
}
